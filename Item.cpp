#include "pch.h"
#include "Item.h"
#include <iostream>

//Item no appropriate default constructor avaliable,
//find out a possible fix to do with inbcluding Item in initializer list

Item::Item(std::string Name, std::string Description, int Quantity)
{
	ItemName = Name;
	ItemDescription = Description;
	ItemQuantity = Quantity;
}

Item::Item(const Item& cpy)
{
	ItemName = cpy.ItemName;
	ItemDescription = cpy.ItemDescription;
	ItemQuantity = cpy.ItemQuantity;
}

void Item::PrintItemDetails() const
{
	std::cout << "\t" << ItemName << ":\n\n\t\t" << ItemDescription << "\n\n\t\tQuantity: " << ItemQuantity << "\n\n" << std::endl;
}
