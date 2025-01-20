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

	// views players inventory
	void ViewInventory();

	void AddItem(Item &item);

	void AddWeapon(Weapon &weapon);

	void RemoveItem(std::string ItemName, std::vector<Item>& Items);

	void RemoveWeapon(std::string item, std::vector<Weapon>& Weapons);

	void CheckItemsAndWeaponVectors(std::string ItemName);

};

