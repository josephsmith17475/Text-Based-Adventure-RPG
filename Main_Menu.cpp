#include "pch.h"
#include "Main_Menu.h"
#include <iostream>

void Main_Menu::PrintMainMenu()
{
	// raw string literal
	std::cout << R"(
                                                                                                                                                                                   
                                                                                                                                                                               dddddddd
                                                                                                                                         iiii                                  d::::::d
                                                                                                                                        i::::i                                 d::::::d
                                                                                                                                         iiii                                  d::::::d
                                                                                                                                                                               d:::::d 
    uuuuuu    uuuuuu  nnnn  nnnnnnnn       ooooooooooo       cccccccccccccccc    ccccccccccccccccuuuuuu    uuuuuu  ppppp   ppppppppp   iiiiiii     eeeeeeeeeeee        ddddddddd:::::d 
    u::::u    u::::u  n:::nn::::::::nn   oo:::::::::::oo   cc:::::::::::::::c  cc:::::::::::::::cu::::u    u::::u  p::::ppp:::::::::p  i:::::i   ee::::::::::::ee    dd::::::::::::::d 
    u::::u    u::::u  n::::::::::::::nn o:::::::::::::::o c:::::::::::::::::c c:::::::::::::::::cu::::u    u::::u  p:::::::::::::::::p  i::::i  e::::::eeeee:::::ee d::::::::::::::::d 
    u::::u    u::::u  nn:::::::::::::::no:::::ooooo:::::oc:::::::cccccc:::::cc:::::::cccccc:::::cu::::u    u::::u  pp::::::ppppp::::::p i::::i e::::::e     e:::::ed:::::::ddddd:::::d 
    u::::u    u::::u    n:::::nnnn:::::no::::o     o::::oc::::::c     cccccccc::::::c     cccccccu::::u    u::::u   p:::::p     p:::::p i::::i e:::::::eeeee::::::ed::::::d    d:::::d 
    u::::u    u::::u    n::::n    n::::no::::o     o::::oc:::::c             c:::::c             u::::u    u::::u   p:::::p     p:::::p i::::i e:::::::::::::::::e d:::::d     d:::::d 
    u::::u    u::::u    n::::n    n::::no::::o     o::::oc:::::c             c:::::c             u::::u    u::::u   p:::::p     p:::::p i::::i e::::::eeeeeeeeeee  d:::::d     d:::::d 
    u:::::uuuu:::::u    n::::n    n::::no::::o     o::::oc::::::c     cccccccc::::::c     cccccccu:::::uuuu:::::u   p:::::p    p::::::p i::::i e:::::::e           d:::::d     d:::::d 
    u:::::::::::::::uu  n::::n    n::::no:::::ooooo:::::oc:::::::cccccc:::::cc:::::::cccccc:::::cu:::::::::::::::uu p:::::ppppp:::::::pi::::::ie::::::::e          d::::::ddddd::::::dd
     u:::::::::::::::u  n::::n    n::::no:::::::::::::::o c:::::::::::::::::c c:::::::::::::::::c u:::::::::::::::u p::::::::::::::::p i::::::i e::::::::eeeeeeee   d:::::::::::::::::d
      uu::::::::uu:::u  n::::n    n::::n oo:::::::::::oo   cc:::::::::::::::c  cc:::::::::::::::c  uu::::::::uu:::u p::::::::::::::pp  i::::::i  ee:::::::::::::e    d:::::::::ddd::::d
        uuuuuuuu  uuuu  nnnnnn    nnnnnn   ooooooooooo       cccccccccccccccc    cccccccccccccccc    uuuuuuuu  uuuu p::::::pppppppp    iiiiiiii    eeeeeeeeeeeeee     ddddddddd   ddddd
                                                                                                                    p:::::p                                                            
                                                                                                                    p:::::p                                                            
                                                                                                                   p:::::::p                                                           
                                                                                                                   p:::::::p                                                           
                                                                                                                   p:::::::p                                                           
                                                                                                                   ppppppppp                                                           
    ---------- Enter a number to select a option ----------                                                                                                                                                           
                   
                                                           
    (1) Start the game

    (2) Options

    (3) Quit game

    )" << std::endl << std::endl;
}

void Main_Menu::Options()
{
    std::cout << "\n\n Options yet to be implemented..... \n\n\n";
}

int Main_Menu::MenuSelection()
{
    while (true)
    {
        std::cin >> choice;
        switch (choice) {

            // Start Game
        case 1:
            return 1;
            break;

            // Options
        case 2:
            Options();
            break;

            // Quit Game
        case 3:
            return 3;
            break;

        default:
            std::cout << "\n\n This is a invalid option please select again \n\n";
            break;
        }
    }
}
