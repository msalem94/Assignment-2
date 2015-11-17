/*
* Implementation of AvatarSerializer class
*/

#include "AvatarAvatarSerializer.h"
#include "Avatar.pb.h"

AvatarAvatarSerializer::AvatarAvatarSerializer() :
	_currentPlayer(nullptr)
{}

AvatarSerializer::~AvatarSerializer()
{
	if (_currentPlayer) delete _currentPlayer;
}

AvatarSerializer &AvatarSerializer::GetInstance()
{
	static AvatarSerializer instance;
	return instance;
}

void AvatarSerializer::SaveAvatar(const Avatar &data)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	proto::Avatar avatar;
}

bool AvatarSerializer::LoadAvatar(const std::string &avatarName)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	proto::Avatar avatar;

	if (_currentPlayer) delete _currentPlayer;
	_currentPlayer = new Avatar(avatarName, 1, AvatarClass::GetClassType(avatarName));
	return true;
}

Avatar *AvatarSerializer::GetPlayer() const
{
	return _currentPlayer;
}
