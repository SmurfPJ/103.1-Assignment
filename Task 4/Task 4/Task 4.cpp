#include <iostream>

int hangMan()
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

int main()
{
    hangMan();
    int word = rand() % 3;

    switch (word) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    }
}