#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;
    int i = 0;
    cout << "------Welcome to the Number Guessing Game------" << endl;
    cout << "Guess a number between 1 to 100." << endl;
    cout << "Enter your guess: ";
    cin >> guess;
    i++;
    while (guess != randomNumber) {
        if (guess > randomNumber) {
            cout << "Too high! Try again: "<<endl;
        } else {
            cout << "Too low! Try again: "<<endl;
        }
        cin >> guess;
        i++;
    }
    cout << "Congratulations! You guessed the correct number." << endl;
    cout << "Number of attempts: " << i << endl;

    return 0;
}
