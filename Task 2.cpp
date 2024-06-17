#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    
    // Variables to store user input and feedback
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100: ";
    
    do {
        cin >> guess;
        attempts++;
        
        if (guess < randomNumber) {
            cout << "Too low! Try again: ";
        } else if (guess > randomNumber) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts." << endl;
        }
        
    } while (guess != randomNumber);
    
    return 0;
}