#include <iostream>

using namespace std;

int main() {
  //initializing variables
  int guess = 0;
  int attempts = 0;
  int number = 0;
  char answer;
  bool playing = true;
  bool replay = true;
  srand(time(NULL));
  while (replay == true) {//Start of game
    cout << "Guess a number between 0 and 100" << endl;
    int number = rand() % 101;
    attempts = 0;
    playing = true;
    while (playing == true) {//Checking guesses
      cin >> guess;
      attempts++;
      if (guess > number) {//too high
	cout << "Guess is too high, try again" << endl;
      }
      else if (guess < number) {//too low
	cout << "Guess is too low, try again" << endl;
      }
      else if (guess == number) {//correct
	cout << "Guess is correct! It took you " << attempts << " guesses" << endl << "Would you like to play again?(y/n)" << endl;
	cin >> answer;
	if (answer == 'y') {//play again
	  playing = false;
	}
	else {//end
	  replay = false;
	  playing = false;
	}
      }
    }
  }
} 
