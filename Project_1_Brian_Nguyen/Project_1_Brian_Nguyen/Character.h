#pragma once
#include <string>

class Character
{
private:
	std::string _name;
	std::string _race;
	int _health;
	int _energy;
public:
	Character(std::string name, std::string race, int health, int energy);
	~Character();
	std::string GetInfo();
};

