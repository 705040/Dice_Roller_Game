#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    return rand() % 6 + 1; // Generate a random number between 1 and 6
}

int main() {
    srand(time(0)); // Seed the random number generator

    std::cout << "Welcome to the Dice Roller!\n";

    char playAgain;
    do {
        int dice1 = rollDice();
        int dice2 = rollDice();

        std::cout << "You rolled: " << dice1 << " and " << dice2 << std::endl;
        std::cout << "Total: " << dice1 + dice2 << std::endl;

        std::cout << "Do you want to roll again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}

