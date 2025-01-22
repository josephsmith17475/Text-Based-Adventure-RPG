#pragma once
#include "Weapon.h"
#include <string>
#include <vector>

// Managed to weapon and item system and now developing the inventory system
// -Focus on making the inventory system including adding a add item/weapon to invnetory
//  and a item/weapon removal system

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
	void CheckItemsAndWeaponVectors(std::string const Name, std::vector<T>& List);

	void ItemOrWeaponSwitch(int const Type);
};

