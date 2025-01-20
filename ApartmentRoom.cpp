#include "pch.h"
#include "ApartmentRoom.h"
#include <string>
#include <fstream>

ApartmentRoom::ApartmentRoom(Player& player) : player(player) {
	PlayApartmentRoom(player);
}

void ApartmentRoom::PlayApartmentRoom(Player& player)
{
	ApartmentHall(player);

	// Add all of the different room functions to the class and place items in each of the rooms and have it act as a tutorial
}

void ApartmentRoom::ApartmentHall(Player& player)
{
	int choice;
	std::cout << "\n=============\n\n"
		"To make your choice in the game enter the number assigned to the option.\n\n"
		"You can view your inventory at anytime by entering the I key as a option.\n\n"
		"=============" << std::endl;

	ShowChoices(4, std::string("Go to kitchen"), std::string("Go to Bedroom"), std::string("Go to Living room"), std::string("Go to bathroom"));
	std::cin >> choice;

	switch (choice) {
		case 1:
			ApartmentKitchen(player);
		/*
		if (choice == "Bedroom" || choice == "bedroom")
			ApartmentBedroom(player);
		if (choice == "Livingroom" || choice == "livingroom")
			ApartmentLivingroom(player);
		if (choice == "Bathroom" || choice == "bathroom")
			ApartmentBathroom(player);*/
		case 5:
			player.GetInventory().ViewInventory();
	}
}

void ApartmentRoom::ApartmentKitchen(Player& player)
{
	std::cout << "\n\nYou walk into the kitchen to find a corpse sat at the table,\n"
		"the window is shattered with cloth hanging from the sharded glass,\n"
		"most of the cupboards are hanging from their hinges.\n" << std::endl;

	ShowChoices(3, std::string("Check the corpse"), std::string("Check the window"), std::string("Check the remaining cupboards"));
	int choice;
	std::cin >> choice;
	switch (choice) {
		case 1:
			PrintFileContents("TextFiles/CheckTheCorpse.txt");
			Item Letter{ "Letter", "I found it in the dead bodies pocket", 1 };
			//FINISH THE REST OF THE OPTIONS AND MAYBE ADD TO THE FUNCTIONALITY OF GAME
			//E.G Checking inventory items and inspecting them
	}
}


