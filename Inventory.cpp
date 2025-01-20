#include "pch.h"
#include "Inventory.h"
#include <iostream>

Inventory::Inventory()
{
}

void Inventory::ViewInventory()
{
	std::string Choice;
	std::string InpectChoice;
	std::cout << "\n\nItems:\n\n" << std::endl;
	for (Item& i: Items) 
	{
		i.PrintItemDetails();
	}
	std::cout << "Weapons:\n\n" << std::endl;
	for (Weapon& i: Weapons) 
	{
		i.PrintItemDetails();
	}

	std::cout << "\n\nWould you like to inspect a item? (Yes/No) :";
	std::cin >> Choice;

	if (Choice == "Yes" || Choice == "yes") {
		std::cout << "\n\nPlease enter the name of the item you'd like to inspect: ";
		std::cin >> InpectChoice;


	}
	if (Choice == "No" || Choice == "no") {

	}

}

void Inventory::AddItem(Item &item)
{
	this->Items.push_back(item);
}

void Inventory::AddWeapon(Weapon &weapon)
{
	this->Weapons.push_back(weapon);
}

void Inventory::RemoveItem(std::string ItemName, std::vector<Item>& Items)
{
	for (int i{ 0 }; i < Items.size(); i++) {
		if (Items[i].GetItemName() == ItemName)
			// this will get to the correct position to erase the Item
			Items.erase(Items.begin() + i);
			return;
	}
	std::cout << "Item could not be found" << std::endl;
}

void Inventory::RemoveWeapon(std::string WeaponName, std::vector<Weapon>& Weapons)
{
	for (int i{ 0 }; i < Weapons.size(); i++) {
		if (Weapons[i].GetItemName() == WeaponName)
			// this will get to the correct position to erase the Item
			Weapons.erase(Weapons.begin() + i);
		return;
	}
	std::cout << "Item could not be found" << std::endl;
}

// Finish the implementation of this function, it will need to take a single vector 
//		but is capable of listing both Weapon class items and Item class items without 
//		duplicated code. Could potentially use the Weapons as the parameter and find a way to
//		add the Items class to it
void Inventory::CheckItemsAndWeaponVectors(std::string Name) {

}
