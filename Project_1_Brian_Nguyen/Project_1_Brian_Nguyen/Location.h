#pragma once
#include <string>
class Location
{
private:
	std::string _name;
	std::string _description;
public:
	Location(std::string name, std::string description);
	~Location();
	std::string GetInfo();
};

