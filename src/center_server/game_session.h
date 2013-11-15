#ifndef __GAME_SESSION_H__
#define __GAME_SESSION_H__

#include "network_session.h"

class Player;
class GameSession
    : public NetworkSession
{
public:
    GameSession(const uint64& session_id);
    virtual ~GameSession();

public:
    Player* getPlayer();

private:
    void attackPlayerPtr(Player* player);

public:
    //登录模块
    void user_login_handler(const NetworkMessage& message);
    void user_register_handler(const NetworkMessage& message);

    //玩家资料模块
    void get_player_profile_handler(const NetworkMessage& message);

    //聊天模块
    void chat_message_handler(const NetworkMessage& message);

    //房间模块
    void room_create_handler(const NetworkMessage& message);
    void get_room_list_handler(const NetworkMessage& message);
    void broadcast_room_add(uint32 id, const std::string& roomName, bool isPublic);
    void enter_room_handler(const NetworkMessage& message);
    void broadcast_room_info_change(uint32 room_id, const std::string& roomName, uint32 playersCount);
    void room_info_change_handler(const NetworkMessage& message);

private:
    Player* _player;
};

#endif