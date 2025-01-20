#pragma once

#include<iostream>
#include<string.h>
#include"Inventory.h"

class Player
{
private:
	std::string PlayerName{};
	int Health{0}, MaxHealth{ 100 };

	Inventory PlayerInventory{};

	// This will check if the player wants tutorials on their playthrough or not
	bool tutorial{ false };

public:
	Player();

	// -------- Getters --------
	std::string GetPlayerName() { return PlayerName; }
	int GetMaxHealth() { return MaxHealth; }
	int GetHealth() { return Health; }
	Inventory& GetInventory() { return PlayerInventory;  }

	// -------- Setters --------
	void SetPlayerName();
};

