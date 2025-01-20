#pragma once
#include "Player.h"
#include "GameLogic.h"
class ApartmentRoom : public GameLogic
{
private:

	Player player;

public:

	ApartmentRoom(Player& player);

	void PlayApartmentRoom(Player& player);

	void ApartmentHall(Player& player);

	void ApartmentKitchen(Player& player);
	//void ApartmentBedroom(Player& player);
	//void ApartmentLivingroom(Player& player);
	//void ApartmentBathroom(Player& player);

};

