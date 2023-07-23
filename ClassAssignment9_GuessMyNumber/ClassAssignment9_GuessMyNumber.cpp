#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNum = rand() % 100 + 1;
    int tries = 0;
    int guess = 0;
    char tryAgain;

    std::cout << "\tWelcome to 'Guess My Number'!!\n\n";

    do {
    std::cout << "Guess my number: \n";
    std::cin >> guess;
    tries++;
        if (guess > secretNum) {
            std::cout << "Too high! Try again\n";
        }
        else if (guess < secretNum) {
            std::cout << "Too low! Try again\n";
        }
        else if (guess == secretNum){
            std::cout << "You got it in "<<tries<<" tries! Great job!";
            break;
        }
        else {
            std::cout << "Looks like you ran out of tries! Better luck next time!\n Try again? (y/n)\n";
            std::cin >> tryAgain;
            if (tryAgain == 'y') {
                continue;
            }
        }
    } while (guess != secretNum);
    return 0;
}