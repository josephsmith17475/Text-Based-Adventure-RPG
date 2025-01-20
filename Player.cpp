#include "pch.h"
#include "Player.h"

Player::Player() : Health(100)
{
	SetPlayerName();
}

void Player::SetPlayerName()
{
	bool Correct{ false };
	while (!Correct)
	{
		std::string Choice{};
		std::cout << "Please enter your adventurers name: \n\n" << std::endl;
		std::cin >> PlayerName;

		std::cout << "\n\nIs this name correct?: " << PlayerName << " (Yes/No): \n\n" << std::endl;
		std::cin >> Choice;

		if (Choice == "Yes" || Choice == "yes") {
			Correct = true;
			std::cout << "\n\nThis is a valid name. Enjoy the game." << std::endl;
		}

		if (Choice == "No" || Choice == "no") {
			Correct = false;
			std::cout << "\n\nThis is a invalid name. Please enter a valid name." << std::endl;
		}
	}
}