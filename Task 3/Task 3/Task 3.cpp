#include <iostream>

int main()
{
    int matricesA[3][3], matricesB[3][3], matricesC[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "\nPlease input 9 variables into Matrice A:\n";
            std::cin >> matricesA[i][j];
            if (matricesA[i][j] < 0) {
                std::cout << "\nThat is not a valid number. Please input a different number.\n";
                j--;
            }
        }
    }
    system("cls");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "\nPlease input 9 variables into Matrice B:\n";
            std::cin >> matricesB[i][j];
            if (matricesB[i][j] < 0) {
                std::cout << "\nThat is not a valid number. Please input a different number.\n";
                j--;
            }
        }
    }
    system("cls");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matricesC[i][j] = matricesA[i][j] * matricesB[i][j];
            matricesC[i][j] *= 3;
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matricesC[i][j] = matricesA[i][j] * matricesB[i][j];
            matricesC[i][j] *= 3;
        }
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "\n";
        for (int j = 0; j < 3; j++) {
            std::cout << "\t" << matricesC[i][j];
        }
    }
}