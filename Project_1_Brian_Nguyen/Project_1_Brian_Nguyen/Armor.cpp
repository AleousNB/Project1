#include "Armor.h"

using namespace std;

Armor::Armor(string name, int armorRating)
{
	_name = name;
	_armorRating = armorRating;
}


Armor::~Armor()
{
}

string Armor::GetInfo()
{
	string info = "This is " + _name + "; ";
	info += "it protects the wearer from " + to_string(_armorRating) + " damage.";
	return info;
}