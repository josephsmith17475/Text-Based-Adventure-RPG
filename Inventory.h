#pragma once
#include "Weapon.h"
#include <string>
#include <vector>
#include "GameLogic.h"

// Function Prototype
void PrintFileContents(std::string FileLocation);

class Inventory
{
private:
	std::vector<Weapon> Weapons;
	std::vector<Item> Items;
public:

	// no args Constructor
	Inventory();

	// Getters
	std::vector<Weapon>& GetWeapons() { return Weapons; }

	std::vector<Item>& GetItems() { return Items; }

	// views players inventory
	void ViewInventory();

	void AddItem(Item &item);

	void AddWeapon(Weapon &weapon);

	void RemoveItem(std::string ItemName, std::vector<Item>& Items);

	void RemoveWeapon(std::string item, std::vector<Weapon>& Weapons);

	template <typename T>
	void CheckItemsAndWeaponVectors(std::string Name, std::vector<T>& List, int TypeOfSearch);

	void ItemOrWeaponSwitch(int const Type);

	void InspectItemOrWeapon(std::string InspectChoice, std::vector<Item>& Items, std::vector<Weapon>& Weapons);
};

