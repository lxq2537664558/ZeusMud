//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: 21001_C2SRoomCreateReq.proto
namespace Protocol
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"C2SRoomCreateReq")]
  public partial class C2SRoomCreateReq : global::ProtoBuf.IExtensible
  {
    public C2SRoomCreateReq() {}
    
    private string _room_name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"room_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string room_name
    {
      get { return _room_name; }
      set { _room_name = value; }
    }
    private string _password;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"password", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string password
    {
      get { return _password; }
      set { _password = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}