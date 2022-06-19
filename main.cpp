#include "wordle.h"

int main()
{
    std::string guess;
    Wordle wordle("dict.txt");
    std::cout << Wordle::get_rules() << std::endl;

    // ...
}
