/*
CH-230-A
a9_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string name;
    int guess;
    int number;
    int tries = 0;

    // Ask for player's name
    cout << "Enter your name: ";
    cin >> name;

    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "Welcome, " << name << "! Try to guess the number (1-100)." << endl;

    // Loop until player guesses correctly
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > number)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations, " << name << "! You guessed the number in "
                 << tries << " tries." << endl;
        }
    }
    while (guess != number);

    return 0;
}
