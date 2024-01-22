#include<iostream>
#include<ctime>
using namespace std;

int main(){
       srand(time(0));

       // It generates a random number between 1 and 100
       int randomNumber =rand() % 100 + 1;

       string name;
       cout<<"May I know your name please?"<<endl;
       cin>>name;

       int userGuess;
       int attempts=0;

       cout << "Welcome to the Number Guessing Game! "<<name<<endl;
       cout << "Try to guess the number between 1 and 100.\n";

       do{
            cout << "Enter your guess: ";
            cin >> userGuess;

        // Check if the guess is too high, too low, or correct
        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n\n";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n\n";
        } else {
            cout << "Congratulations "<<name<<" ! You guessed the correct number in " << attempts + 1 << " attempts.\n";
        }

        attempts++;

    } while (userGuess != randomNumber);



}
