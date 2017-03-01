#pragma once
#include <string>
class Weapon
{
private:
	std::string _name;
	int _weaponPower;
public:
	Weapon(std::string name, int weaponPower);
	~Weapon();
	std::string GetInfo();
};

