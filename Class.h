/*
* Declaration of the AvatarClass class.
* AvatarClass defines class name and class type for an Avatar.
*/
#pragma once

#include <string>

enum ClassType {Wizard,Cleric,Mage };

struct Skill {
	enum SkillType { Rock, Paper, Scissors };
	std::string name;
	SkillType type;

	Skill() {}
	Skill(std::string n, SkillType t) : name(n), type(t) {}
};

struct Weapon{
	std::string name;

	Weapon() {}
	Weapon(std::string n) : name(n){}
};

class Class
{
public:

	Class(const ClassType &t);
	~Class();

	static ClassType GetClassType(const std::string &className);

	std::string GetClassName() const;

	ClassType GetClassType() const;

	Skill GetRockSkill() const;

	Skill GetPaperSkill() const;

	Skill GetScissorsSkill() const;

private:

	const ClassType _classType;
	Skill _rock;
	Skill _paper;
	Skill _scissors;
	Weapon _weapon;
	std::string _name;
};