#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);



int main()
{
    int numberOfGuesses = 0;
    int maxnum = 40;
    numberOfGuesses = game(maxnum);


}

int game(int maxnum) {

    int rNumber = 0;
    int guess = 0;
    int numberOfGuesses = 0;


    srand(time(0));

    rNumber = rand() % maxnum +1;



    while (true) {


        cout << "Try to guess the number i'm thinking of between 0 and " << maxnum << "." << endl;
        cin >> guess; cout << endl;
        numberOfGuesses++;

        if (guess == rNumber) {
            cout << "GZ! You are correct!" << endl;

            break;
        }

        if (guess < 0 || guess > maxnum) {
            cout << "Try to guess number between 0 and " << maxnum << "." << endl;

        }

        if (guess < rNumber) {
            cout << "Your guess is smaller than the number i am thinking of. Try again!" << endl;

        }

        if (guess > rNumber) {
            cout << "Your guess is larger than the number i am thinking of. Try again!" << endl;

        }



    }
    cout << "You guessed " << numberOfGuesses << " times" << endl;
    char newGame;
    cout << "do you want to play a new game? Y/N" << endl;
    cin >> newGame;

    if (newGame == 'y') {
        return game(maxnum);
    }else {
        return 0;
    }
    return numberOfGuesses;
}


