#include <iostream>
#include <string>
#include "Location.h"
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

int main()
{
	Location forest = Location("Forest", "There's alot of trees here...");
	Character legolas = Character("Legolas", "Elf", 100, 100);
	Weapon greatSwordOfGreatness = Weapon("Great Sword of Greatness", 35);
	Armor clothArmor = Armor("Cloth Armor", 45);

	cout << forest.GetInfo() << endl;
	cout << legolas.GetInfo() << endl;
	cout << greatSwordOfGreatness.GetInfo() << endl;
	cout << clothArmor.GetInfo() << endl;

	Location field = Location("Field", "There's alot of grass...");
	Character gandalf = Character("Gandalf", "Maiar", 1000, 1000);
	Weapon staff = Weapon("Wooden Staff", 100);
	Armor clothrobes = Armor("Cloth Robes", 50);

	cout << endl << endl;

	cout << field.GetInfo() << endl;
	cout << gandalf.GetInfo() << endl;
	cout << staff.GetInfo() << endl;
	cout << clothrobes.GetInfo() << endl;
	return 0;
}