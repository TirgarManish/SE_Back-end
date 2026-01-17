#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100!" << endl;

    // Loop until the correct number is guessed
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
    }

    return 0;
}
