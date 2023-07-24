#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main()
{
    srand(time(0));
    
    int guess_number = rand() % 100 + 1;

    int user_guess_number;
    int number_of_Guesses = 0;

    cout <<"\nWelcome to number guessing game"<<endl;
    cout << "\nCan you guess the number which I have chosen between 1 to 100?";

    do {
        cout << "\nEnter your guess: ";
        cin >>user_guess_number;
        number_of_Guesses++;

        if (user_guess_number == guess_number) 
		{
            cout << "\nCongratulations! You guessed the number in "<<number_of_Guesses<<" guesses.";
            break;
        } 
		
		else if (user_guess_number < guess_number) 
		{
            cout << "Too low.Please try again.\n";
        } 
		
		else 
		{
            cout << "Too high.Please try again.\n";
        }
        
    } while(true);

    return 0;
}

