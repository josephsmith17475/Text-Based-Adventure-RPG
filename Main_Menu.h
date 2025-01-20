#pragma once

class Main_Menu
{
private:

	int choice{};

public:
	void PrintMainMenu();

	void Options();

	void MenuSelection();

	// -------- Getters --------
	int GetChoice() { return choice; }

};

