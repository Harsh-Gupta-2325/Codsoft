#include <iostream>
#include <cstdlib>  
#include <ctime>  
using namespace std;
void play_game();
int main() {
    cout<<"Welcome!! This is the game of Number Guessing......\n";
    char choice;

    cout << "Do you want to play the guessing game? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        play_game();
    } else {
        cout << "Exiting the game. Have a great day!" << std::endl;
    }

    return 0;
}

void play_game()
{
	srand(time(0));  // Seed the random number generator
    int number_to_guess = rand() % 100 + 1;
    int guess;
    char c;
    do {
    	cout << "\nGuess the number between 1 and 100: ";
         cin >> guess;

        if (guess < number_to_guess) {
            cout << "Too low.";
            
        } else if (guess > number_to_guess) {
            cout << "Too high.";
            
        }

    } while (guess!=number_to_guess);
    if(guess==number_to_guess){
        	cout << "\nCongratulations! You guessed the correct number." << endl;
       	}
    cout<<"\nDo you want to continue,if yes, then enter y otherwise n: ";
    cin>>c;
    if(c=='y')
    {
    	play_game();
	}
	else{
    cout << "\nHope you enjoy the game!!" << endl;
}
}
