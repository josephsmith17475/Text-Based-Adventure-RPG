#pragma once
#include <string>
class GameLogic
{
private:

public:
	GameLogic() {};

	void ShowChoices(int ChoiceCount, ...);

	void PrintFileContents(std::string FileLocation);
};

