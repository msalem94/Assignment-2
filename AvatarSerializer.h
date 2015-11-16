/*
* Declaration of AvatarSerializer class
* Singleton class for saving and loading of avatar data
* MADE FOR WINDOWS OS ONLY
*/

#pragma once
#include <string>

#include "Avatar.h"



class Serializer
{
public:
	~Serializer();

	/*
	* Returns the AvatarSerializer instance
	*/
	static Serializer &GetInstance();

	/*
	* The member functions for saving and loading avatar data
	*/
	void SaveAvatar(const Avatar &avatar);
	bool LoadAvatar(const std::string &avatarName);

	/*
	* Returns the current player avatar loaded
	*/
	Avatar *GetPlayer() const;

private:
	Serializer();
	Serializer(Serializer const&) = delete;
	void operator=(Serializer const&) = delete;

	Avatar *_currentPlayer;
};