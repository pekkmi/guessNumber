#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);


int game() {

    int rNumber = 0;
    int guess = 0;
    int numberOfGuesses = 0;

    srand(time(0));

    rNumber = rand() % 21;



    while (true) {

        cout << "Try to guess the number i'm thinking of between 0 and 20." << endl;
        cin >> guess; cout << endl;
        numberOfGuesses++;

        if (guess == rNumber) {
            cout << "GZ! You are correct!" << endl;

            break;
        }

        if (guess < 0 || guess > 20) {
            cout << "Try to guess number between 0 to 20" << endl;

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
        return game();
    }else {
        return 0;
    }
    return 0;
}
int main()
{
    game();
    return 0;
}


