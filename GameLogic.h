#pragma once
#include <string>

//	Function Prototypes

class GameLogic
{
private:

public:
	GameLogic() {};

	void ShowChoices(int ChoiceCount, ...);

	void PrintFileContents(std::string FileLocation);
};

