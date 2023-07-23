#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNum = rand() % 100 + 1;
    int tries = 4;
    int guess = 0;
    char tryAgain;

    while (guess != secretNum && tries > 1) {
    std::cout << "Guess my number: \n";
    std::cin >> guess;
        if (guess > secretNum) {
            std::cout << "Too high! Try again\n";
            tries - 1;
        }
        else if (guess < secretNum) {
            std::cout << "Too low! Try again\n";
            tries - 1;
        }
        else if (guess == secretNum){
            std::cout << "You got it! Great job!";
            tries = 4;
            break;
        }
        else {
            std::cout << "Looks like you ran out of tries! Better luck next time!\n Try again? (y/n)\n";
            std::cin >> tryAgain;
            if (tryAgain == 'y') {
                continue;
            }
        }
    }
}