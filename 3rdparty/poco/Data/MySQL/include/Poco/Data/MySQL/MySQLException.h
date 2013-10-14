//
// MySQLException.h
//
// $Id: //poco/1.4/Data/MySQL/include/Poco/Data/MySQL/MySQLException.h#1 $
//
// Library: Data/MySQL
// Package: MySQL
// Module:  MySQLException
//
// Definition of the MySQLException class.
//
// Copyright (c) 2008, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Data_MySQL_MySQLException_INCLUDED
#define Data_MySQL_MySQLException_INCLUDED


#include "Poco/Data/MySQL/MySQL.h"
#include "Poco/Data/DataException.h"
#include <typeinfo>
#include <string>


typedef struct st_mysql MYSQL;
typedef struct st_mysql_stmt MYSQL_STMT;


namespace Poco {
namespace Data {
namespace MySQL {


class MySQL_API MySQLException: public Poco::Data::DataException
	/// Base class for all MySQL exceptions
{
public:
	MySQLException(const std::string& msg, int code = 0);
		/// Creates MySQLException.

	MySQLException(const MySQLException& exc);
		/// Creates MySQLException.

	~MySQLException() throw();
		/// Destroys MySQLexception.

	MySQLException& operator=(const MySQLException& exc);
		/// Assignment operator.

	const char* name() const throw();
		/// Returns exception name.

	const char* className() const throw();
		/// Returns the name of the exception class.

	Poco::Exception* clone() const;
		/// Creates an exact copy of the exception.
		///
		/// The copy can later be thrown again by
		/// invoking rethrow() on it.

	void rethrow() const;
		/// (Re)Throws the exception.
		///
		/// This is useful for temporarily storing a
		/// copy of an exception (see clone()), then
		/// throwing it again.
};


class ConnectionException : public MySQLException
	/// ConnectionException
{
public:
	ConnectionException(const std::string& msg);
		/// Creates ConnectionException.

	ConnectionException(const std::string& text, MYSQL* h);
		/// Destroys ConnectionException.

private:
	static std::string compose(const std::string& text, MYSQL* h);

};


class StatementException : public MySQLException
	/// StatementException
{
public:
	StatementException(const std::string& msg, int code = 0);
		/// Creates StatementException.

	StatementException(const std::string& text, MYSQL_STMT* h, const std::string& stmt = "");
		/// Destroys StatementException.

private:
	static std::string compose(const std::string& text, MYSQL_STMT* h, const std::string& stmt);
};


//
// inlines
//
inline MySQLException& MySQLException::operator=(const MySQLException& exc)
{
	Poco::Data::DataException::operator=(exc);
	return *this;
}


inline const char* MySQLException::name() const throw()
{
	return "MySQL";
}


inline const char* MySQLException::className() const throw()
{
	return typeid(*this).name();
}


inline Poco::Exception* MySQLException::clone() const
{
	return new MySQLException(*this);
}


inline void MySQLException::rethrow() const
{
	throw *this;
}


} } } // namespace Poco::Data::MySQL


#endif //Data_MySQL_MySQLException_INCLUDED
