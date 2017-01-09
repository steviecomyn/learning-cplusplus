#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// Secret Number Game

int main()
{
	// Variables.
	int secret_number=77;
	int guess_count=0;
	int user_guess=-1;
	
	// Seeds the Random Number Generator with current time, to stop
	// the same "random" number everytime the program is run.
	srand(time(NULL));
	secret_number=rand() % 9 + 1;
	
	while (user_guess!=secret_number)
	{
		// Asks User for a Number and stores it in user_guess.
		cout << "Please guess a Number: ";
		cin >> user_guess;
		
		// Add's 1 to the Guess Counter.
		guess_count=guess_count+1;
		
		// Two if statements to give the user a hint.
		if (user_guess>secret_number)
		{
			cout << "Too High! - try a Smaller Number" << endl;
		}
		if (user_guess<secret_number)
		{
			cout << "Too Low! -  try a Bigger Number" << endl;
		}
	}
	
	cout << "You've guessed correctly! with only " 
	<< guess_count << " guesses, The number was " 
	<< secret_number << endl;
	
}
