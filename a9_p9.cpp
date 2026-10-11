/*
CH-230-A
a9_p9.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// Replaces vowels in a word with underscores
string hideVowels(const string &word)
{
    string hidden = word;
    for (char &c : hidden)
    {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            c = '_';
        }
    }
    return hidden;
}

// Returns a random word from the array
string getRandomWord(const vector<string> &words)
{
    int index = rand() % words.size();
    return words[index];
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    vector<string> words = 
    {
        "computer", "television", "keyboard", "laptop", "mouse",
        "programming", "internet", "screen", "speaker", "printer",
        "camera", "battery", "charger", "tablet", "monitor",
        "microphone", "router"
    };

    string guess;
    bool playAgain = true;

    while (playAgain)
    {
        string word = getRandomWord(words);
        string hiddenWord = hideVowels(word);
        int tries = 0;

        cout << "Guess the word: " << hiddenWord << endl;

        while (true)
        {
            cout << "Enter your guess (or type 'quit' to exit): ";
            cin >> guess;
            tries++;

            if (guess == "quit")
            {
                cout << "Game stopped. Goodbye!" << endl;
                return 0;
            }

            if (guess == word)
            {
                cout << "Correct! The word was \"" << word << "\"." << endl;
                cout << "Number of tries: " << tries << endl;
                break;
            }
            else
            {
                cout << "Wrong guess, try again!" << endl;
            }
        }

        char choice;
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y')
        {
            playAgain = false;
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
