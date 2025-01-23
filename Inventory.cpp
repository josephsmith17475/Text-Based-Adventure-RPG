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
		std::cout << "\n\nPlease enter the name of the item or weapon you'd like to inspect: ";
		std::cin >> InpectChoice;
		InspectItemOrWeapon(InpectChoice, Items, Weapons);

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
	CheckItemsAndWeaponVectors(ItemName, Items, 1);
}

void Inventory::RemoveWeapon(std::string WeaponName, std::vector<Weapon>& Weapons)
{
	CheckItemsAndWeaponVectors(WeaponName, Weapons, 1);
}


// TypeOfSearch is for the type of search/action that will occur during the lists search
//
//		1 = Removing Items from the list
//		
//		2 = Inspecting Items or Weapons
template <typename T>
void Inventory::CheckItemsAndWeaponVectors(std::string Name, std::vector<T>& List, int TypeOfSearch) {
	for (int i{ 0 }; i < List.size(); i++) {
		if (List[i].GetItemName() == Name) {
			// this will get to the correct position to erase the Item
			switch (TypeOfSearch) {

			//		==== Erasing Items/Weapons ====
			case 1:
				List.erase(List.begin() + i);
				std::cout << Name;
				ItemOrWeaponSwitch(1);
				return;
				break;

			//		==== Inspecting Items ====
			case 2:
				std::string FileLocation{ "InventoryItems/" + Name + ".txt" };
				PrintFileContents(FileLocation);
				return;
				break;
			}
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

void Inventory::InspectItemOrWeapon(std::string InspectChoice, std::vector<Item>& Items, std::vector<Weapon>& Weapons) {
	
}
