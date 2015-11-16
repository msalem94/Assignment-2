/*
* Implementation of serializer class
*/

#include "Serializer.h"
#include "Avatar.pb.h"

Serializer::Serializer() :
	_currentPlayer(nullptr)
{}

Serializer::~Serializer()
{
	if (_currentPlayer) delete _currentPlayer;
}

Serializer &Serializer::GetInstance()
{
	static Serializer instance;
	return instance;
}

void Serializer::SaveAvatar(const Avatar &data)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	proto::Avatar avatar;
}

bool Serializer::LoadAvatar(const std::string &avatarName)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	proto::Avatar avatar;

	if (_currentPlayer) delete _currentPlayer;
	_currentPlayer = new Avatar(avatarName, 1, AvatarClass::GetClassType(avatarName));
	return true;
}

Avatar *Serializer::GetPlayer() const
{
	return _currentPlayer;
}