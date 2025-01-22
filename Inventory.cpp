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
	CheckItemsAndWeaponVectors(ItemName, Items);
}

void Inventory::RemoveWeapon(std::string WeaponName, std::vector<Weapon>& Weapons)
{
	CheckItemsAndWeaponVectors(WeaponName, Weapons);
}

// I managed to implement the New function that will reduce repeated code
// using template functions, i can add to this later for going through the list with 
// different intents to removing items

template <typename T>
void Inventory::CheckItemsAndWeaponVectors(std::string const Name, std::vector<T>& List) {
	for (int i{ 0 }; i < List.size(); i++) {
		if (List[i].GetItemName() == Name) {
			// this will get to the correct position to erase the Item
			List.erase(List.begin() + i);
			std::cout << Name;
			ItemOrWeaponSwitch(1);
			return;
		}
	}
	std::cout << Name;
	ItemOrWeaponSwitch(2);
}

void Inventory::ItemOrWeaponSwitch(int const Type) {
	switch (Type) {

	case 1:
		std::cout << " has been found" << std::endl;
		break;

	case 2:
		std::cout << " could not be found" << std::endl;
		break;

	}
}