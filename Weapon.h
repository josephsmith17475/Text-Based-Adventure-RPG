#pragma once
#include "Item.h"
class Weapon :	public Item
{
private:

	int ItemDamage{};

public:

	void PrintItemDetails() const override;

	// full args constructor
	Weapon(std::string Name, std::string Description, int Quantity, int Damage);

	// copy constructor
	Weapon(const Weapon& cpy); 

	// ---------------------Overloaded Operators---------------------

	bool operator==(const Weapon& rhs) const { return this->GetItemName() == rhs.GetItemName(); }
};