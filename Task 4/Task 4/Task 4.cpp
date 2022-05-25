#include <iostream>
#include <string>

int Hangman()
{
    std::cout << "   _____ \n";
    std::cout << "  |     | \n";
    std::cout << "  |     O \n";
    std::cout << "  |    \\|/ \n";
    std::cout << "  |     |  \n";
    std::cout << "  |    / \\ \n";
    std::cout << "  | \n";
    std::cout << "  | \n";
    std::cout << "-----";
    std::cout << "\n\n";
    return;
}

int HangmanRight()
{
    std::cout << "\n\n\tYour guess is correct\n";
    std::cout << " O \n";
    std::cout << "\\|/ \n";
    std::cout << " | \n";
    std::cout << "/ \\ ";
    std::cout << "\n\n";
}

int HangmanFailed()
{
    std::cout << "\n\n\tYour Guess is wrong\n";
    std::cout << "   _____ \n";
    std::cout << "  |     | \n";
    std::cout << "  |    /|\\ \n";
    std::cout << "  |     | \n";
    std::cout << "  |    /|\\ \n";
    std::cout << "  |     O \n";
    std::cout << "  | \n";
    std::cout << "  | \n";
    std::cout << "-----";
    std::cout << "\n\n";
}

int LetterCheck(char check, int round)
{
    if (check == 'e')
        HangmanRight();
    else if (round < 2)
        std::cout << "\nSorry, try again\n";
    return;
}

int main()
{
    Hangman();
    char letter;
    
    for (int i = 0; i < 3; i++) {
        std::cout << "Guess the missing letter in Yo_bee: ";
        std::cin >> letter;
        LetterCheck(letter, i);
    }
    HangmanFailed();
}
