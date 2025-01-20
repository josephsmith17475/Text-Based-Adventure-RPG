#pragma once

#include <string>
#include <iostream>

class Item
{
protected:

	std::string ItemName{};
	std::string ItemDescription{};
	int ItemQuantity{};

public:
	// full args Constructor
	Item(std::string Name, std::string Description, int Quantity);

	// copy constructor
	Item(const Item& cpy);

	// Prints the Items Details
	void virtual PrintItemDetails() const;

	// -------- Getters --------
	std::string GetItemName() const { return this->ItemName; }

	// ---------------------Overloaded Operators---------------------

	bool operator==(const Item& rhs) const { return this->ItemName == rhs.ItemName; }

};

