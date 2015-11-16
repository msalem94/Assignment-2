#include <gtest\gtest.h>
#include "AvatarSerializer.h"
#include "Avatar.h"

TEST(Test, SerializerTest)
{
	AvatarSerializer::GetInstance().SaveAvatar(Avatar("Mage", 1, ClassType::Mage));
	AvatarSerializer::GetInstance().LoadAvatar("Mage");
	EXPECT_EQ(1, 1);
}
TEST(Test, NameTest){
	const Avatar &player = GetPlayer();
	int Health = player.GetHealth();
	EXPECT_EQ(Health, 3);
}
TEST(Test, LevelTest){
	const Avatar &player = GetPlayer();
	int level = player.GetLevel();
	EXPECT_EQ(level, 1);
}
TEST(Test, NameTest){
	const Avatar &player = GetPlayer();
	const Class = player.GetClass();
	EXPECT_EQ(Class, "Mage");
}

