#pragma once
#include <string>
class Armor
{
private:
	std::string _name;
	int _armorRating;
public:
	Armor(std::string name, int armorRating);
	~Armor();
	std::string GetInfo();
};

