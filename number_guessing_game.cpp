#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    int secretNumber;
    int guess;
    int attempts;
    char playAgain;

    cout << "=====================================\n";
    cout << "       NUMBER GUESSING GAME\n";
    cout << "=====================================\n";

    do
    {
        // Generate a random number between 1 and 100
        secretNumber = rand() % 100 + 1;

        attempts = 0;

        cout << "\nI have selected a number between 1 and 100.\n";
        cout << "Try to guess it!\n";

        do
        {
            cout << "\nEnter your guess: ";
            cin >> guess;

            attempts++;

            if (guess > secretNumber)
            {
                cout << "Too high! Try a smaller number.\n";
            }
            else if (guess < secretNumber)
            {
                cout << "Too low! Try a larger number.\n";
            }
            else
            {
                cout << "\nCongratulations! You guessed the number!\n";
                cout << "Number of attempts: " << attempts << "\n";
            }

        } while (guess != secretNumber);

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\n=====================================\n";
    cout << "       Thanks for playing!\n";
    cout << "=====================================\n";

    return 0;
}