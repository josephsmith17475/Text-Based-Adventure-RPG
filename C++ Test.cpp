// C++ Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Player.h"
#include "Main_Menu.h"
#include "ApartmentRoom.h"
#include <iostream>
#include <string>

// This Will handle the clearing of the console
#include <conio.h>

// This will handle the time function and create delays in the code
#include <chrono>
#include <thread>

using namespace std::chrono_literals;
using namespace std::this_thread;


// Function Prototypes
void StartGame(Player& player);
void Introduction(Player& player);


int main()
{
	Main_Menu Menu{};
	Player player{};
	sleep_for(3s);
	system("cls");
	
	Menu.PrintMainMenu();
	Menu.MenuSelection();

	if (Menu.GetChoice() == 1)
		StartGame(player);
	else
		return 0;
}

void StartGame(Player& player)
{
	std::cout << "\n\n\n Game Started\n\n\n";
	Weapon Knife{ "Knife", "I grabbed it while I was escaping the farmhouse", 1, 5};
	player.GetInventory().AddWeapon(Knife);
	player.GetInventory().RemoveWeapon("Doggy",player.GetInventory().GetWeapons());
	Introduction(player);

	ApartmentRoom AR(player);
}

void Introduction(Player& player)
{
	std::cout << "\n\nI Locked the door behind me and sat myself up against it.\n"
		"It started banging at the door and did so for a while but later on it stopped.\n"
		"The thing sprinted down the hallway until i couldnt hear it anymore,\n"
		"Its not worth risking leaving the room and running into it again,\n"
		"i need to gather whatever reasources i can find and look,\n"
		"for a different way out of this apartment.\n" << std::endl;
}
