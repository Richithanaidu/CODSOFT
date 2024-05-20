#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "Try to guess the number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts!\n";
        }
    } while (guess != randomNumber);

    return 0;
}
