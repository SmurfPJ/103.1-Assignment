#include <iostream>
#include <string>
#include "Variables.h"

int main()
{
    std::cout << "\nWhat is the first players name: ";
    std::cin.ignore();
    std::getline(std::cin, player1);
    soccer(player1);
    std::cout << "\n\nWhat is the players's number: ";
    std::cin >> (player1).playNum;
    std::cout << "\n\nWhat is the players's top speed: ";
    std::cin >> (player1).topSpeed;

    std::cout << "\n\nWhat the the players position:\n\n1. Goalkeeper\n2. Midfield\n3. Striker\n4. Winger\n5. Defend\n\n";
    switch (positChose) {
    case 1:
        
        break;
    default:
        break;
    }
}