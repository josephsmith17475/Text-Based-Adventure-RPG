#pragma once

class Main_Menu
{
private:

	int choice{};

public:
	void PrintMainMenu();

	void Options();

	int MenuSelection();

	// -------- Getters --------
	int GetChoice() { return choice; }

};

