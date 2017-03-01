#include "Character.h"

using namespace std;

Character::Character(string name, string race, int health, int energy)
{
	_name = name;
	_race = race;
	_health = health;
	_energy = energy;
}


Character::~Character()
{
}

string Character::GetInfo()
{
	string info = "This is " + _name + ", a " + _race + " that has ";
	info += to_string(_health) + " health and " + to_string(_energy) + " energy.";
	return info;
}