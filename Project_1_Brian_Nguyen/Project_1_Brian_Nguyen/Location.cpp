#include "Location.h"

using namespace std;

Location::Location(string name, string description)
{
	_name = name;
	_description = description;
}


Location::~Location()
{
}

string Location::GetInfo()
{
	string info = "This is the " + _name + ". " + _description;
	return info;
}
