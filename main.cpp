#include "wordle.h"

int main()
{
    Wordle wordle("dict.txt");
    std::cout << Wordle::get_rules() << std::endl;

    GuessResponse response(false, "");

    do {
        std::string guess;
        do {
            std::cout << "Guess: ";
            std::cin >> guess;
            std::cout << std::endl;
        } while (!wordle.is_valid_guess(guess));
        response = wordle.guess(guess);
        std::cout << "You guessed: " << response.second << std::endl;
    } while (wordle.has_guesses_left() && !response.first);

    // ...
}
