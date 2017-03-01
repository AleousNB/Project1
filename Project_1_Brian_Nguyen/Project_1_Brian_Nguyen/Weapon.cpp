#include "Weapon.h"

using namespace std;


Weapon::Weapon(string name, int weaponPower)
{
	_name = name;
	_weaponPower = weaponPower;
}


Weapon::~Weapon()
{
}

string Weapon::GetInfo()
{
	string info = "This is " + _name + "; it does ";
	info += to_string(_weaponPower) + " damage.";
	return info;
}