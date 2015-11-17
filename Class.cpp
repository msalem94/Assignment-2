

#include "Class.h"

Class::Class(const ClassType &t) :
_classType(t)
{
	if (__classType == ClassType.Wizard){
		_rock = Skill("Meteor", Skill::SkillType::Rock);
		_paper = Skill("Earthquake", Skill::SkillType::Paper);
		_scissors = Skill("Blizzard", Skill::SkillType::Scissors);
		_weapon = Weapon("Staff");
		_name = "Mage"
	}
	
	if (__classType == ClassType.Cleric){
		_rock = Skill("Offering", Skill::SkillType::Rock);
		_paper = Skill("Heavenly Rage ", Skill::SkillType::Paper);
		_scissors = Skill("Trial Cross ", Skill::SkillType::Scissors);
		_weapon = Weapon("Cleric Rod");
		_name = "Cleric";
	}
	if (__classType == ClassType.Mage){
		_rock = Skill("Cone of Cold", Skill::SkillType::Rock);
		_paper = Skill("Mirror Image", Skill::SkillType::Paper);
		_scissors = Skill("Arcane Missiles", Skill::SkillType::Scissors);
		_weapon = Weapon("Wand",);
		_name = "Mage"
	}
}

Class::~Class()
{}

ClassType Class::GetClassType() const
{
	return _classType;
}

Skill Class::GetRockSkill() const
{
	return _rock;
}

Skill Class::GetPaperSkill() const
{
	return _paper;
}

Skill Class::GetScissorsSkill() const
{
	return _scissors;
}
Weapon Class::GetWeapon() const {
	return _weapon;
}

std::string Class::GetClassName() const
{
	return _name;
}