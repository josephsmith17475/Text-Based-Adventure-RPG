#include "pch.h"
#include "Weapon.h"
#include <iostream>
#include <string>

Weapon::Weapon(std::string Name, std::string Description, int Quantity, int Damage) : Item(Name, Description, Quantity)
{
	ItemName = Name;
	ItemDescription = Description;
	ItemQuantity = Quantity;
	ItemDamage = Damage;
}

Weapon::Weapon(const Weapon& cpy) : Item(cpy)
{
	ItemDamage = cpy.ItemDamage;
}

void Weapon::PrintItemDetails() const
{
	std::cout << "\t" << ItemName << ":\n\n\t\tDamage: "<< ItemDamage << "\n\n\t\tDescription: " << ItemDescription << "\n\n\t\tQuantity: " << ItemQuantity << "\n" << std::endl;
}
