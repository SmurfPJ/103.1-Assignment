#include <iostream>

int sum = 0;
const int maxArray = 10;
int calcu[maxArray];


int inputs() {


    for (int i = 0; i < maxArray; i++) {
        std::cout << "\nPlease input 10 numbers. " << 10 - i << "/10 remaining:\n";
        std::cin >> calcu[i];
    }
    system("cls");
    return(calcu[maxArray]);
}

int main()
{
    inputs();

    for (int i = 0; i < maxArray; i++) {
        if (calcu[i] < 0)
            continue;
        sum += calcu[i];
    }
    std::cout << sum;
}