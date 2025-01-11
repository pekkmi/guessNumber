#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Prototype
int game(int maxnum);


int main()
{
    // declare variables for times you have guessed and maximum number to guess
    int numberOfGuesses = 0;
    int maxnum = 40;
    // call game() function with the parameter maxnum
    numberOfGuesses = game(maxnum);


}

    // Game logic in its own function
int game(int maxnum) {

    // Declare variables for game logic
    int rNumber = 0;
    int guess = 0;
    int numberOfGuesses = 0;


    // Random generate a number that is between 0 and maxnumber
    srand(time(0));

    // maxnumber + 1 because if maxnum = 40 it randomizes number between 0 and 39
    rNumber = rand() % maxnum +1;


    // Making a while loop for checkin if guessed number is the same as randomized number
    while (true) {


        cout << "Try to guess the number i'm thinking of between 0 and " << maxnum << "." << endl;
        cin >> guess; cout << endl;
        numberOfGuesses++;

        if (guess == rNumber) {
            cout << "GZ! You are correct!" << endl;
            // Guess is same as randomized number and the loop ends.
            break;
        }

            // Check if guessed number is between the right parametres
        if (guess < 0 || guess > maxnum) {
            cout << "Try to guess number between 0 and " << maxnum << "." << endl;

        }

            // Check if the number you guessed is smaller than the number randomized
        if (guess < rNumber) {
            cout << "Your guess is smaller than the number i am thinking of. Try again!" << endl;

        }

            // Check if the number you guessed is larger than the number randomized
        if (guess > rNumber) {
            cout << "Your guess is larger than the number i am thinking of. Try again!" << endl;

        }



    }
        // Print the amount you guessed
    cout << "You guessed " << numberOfGuesses << " times" << endl;

        // Ask if you want to play again or quit
    char newGame;
    cout << "do you want to play a new game? Y/N" << endl;
    cin >> newGame;

    if (newGame == 'y') {
        // Return back to start of the game
        return game(maxnum);
    }else {
        return 0;
    }
        //Return numberOfGuesses to main() function
    return numberOfGuesses;
}


