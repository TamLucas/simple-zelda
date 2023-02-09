#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_OF_MESSAGES = 5;
const string messages[NUM_OF_MESSAGES] = {
    "Oh no! You are still lost.",
    "You're going in the wrong direction!",
    "Are you trying to get lost?",
    "Keep trying!",
    "You're getting farther away."
};

int main() {
    int num_of_turns = 0;
    srand(time(0)); // seed the random number generator with the current time

    while (num_of_turns < 3) {
        cout << "Turn left or right? ";
        string turn;
        cin >> turn;

        if (turn == "left") {
            cout << "You escaped the magic forest! 🪓🏃💨" << endl;
            return 0;
        }
        else {
            num_of_turns++;
            if (num_of_turns >= 3) {
                cout << "You have taken 3 wrong turns. Time to start over." << endl;
                num_of_turns = 0; // reset the number of turns
            }
            else {
                cout << messages[rand() % NUM_OF_MESSAGES] << endl;
            }
        }
    }

    return 0;
}
