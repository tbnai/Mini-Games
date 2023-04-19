#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	// guess 5 times the right number

	// code time in and time out
	srand(time(NULL));

	// identify random numbers 1 - 100
	int secretNum = rand() % 100 + 1;

	// game criterias 
	int guess;
	int guessCount = 0;
	//this means you did not guess the number!
	bool GameOver = false;

	//Game console output 
	cout << "Welcome to the game. Guess the number! " << endl;

	// game loops when triggered for a response
	while (!GameOver && guessCount < 5) {
		// Game console is wanting a response
		cout << "Guess a number between 1 - 100. " << endl;
		cin >> guess;

		if (guess == secretNum) {
			cout << "Congratulations! You have guessed the right number. You win! ";
		}
		// guess too low
		else if (guess < secretNum) {
			cout << "Your guess is too low. Try again! " << endl;
		}
		else {
			// guess too high
			cout << "Your guess is too high. Try again! " << endl;
		}

	}
	// Game over for user 
	if (!GameOver) {
		cout << "Sorry, you are out of guesses. Better luck next time! The number was: " << secretNum << "." << endl;
	}
	cout << "Thank you for playing the game! " << endl;
	return 0;

}


