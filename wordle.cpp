#include "wordle.h"

GuessResponse Wordle::guess(const std::string& word)
{
    // ...
    return {false, word};
}

std::string Wordle::get_word(const std::string& filename)
{
    std::srand(time(nullptr));

    std::vector<std::string> result;
    std::ifstream file(filename);
    std::string word;

    if (!file.is_open())
    {
        std::cout << "Can not open: " << filename << std::endl;
        return {};
    }

    while (std::getline(file, word))
        result.push_back(word);

    return result[std::rand() % result.size()];
}

std::string Wordle::exact_print(char c)
{
    std::stringstream ss;
    ss << "\033[1;32m" << c << "\033[0m";

    return ss.str();
}

std::string Wordle::contains_print(char c)
{
    std::stringstream ss;
    ss << "\033[1;33m" << c << "\033[0m";

    return ss.str();
}

std::string Wordle::get_rules()
{
    std::stringstream ss;
    ss << "Worlde" << std::endl;
    ss << "Guess a 5 letter word!" << std::endl;
    ss << "Correctly placed characters will be in ";
    for (const char& c: "green") { ss << Wordle::exact_print(c); }
    ss << std::endl;
    ss << "Letters in the word that is incorrectly placed will be in ";
    for (const char& c: "yellow") { ss << Wordle::contains_print(c); }
    ss << std::endl;
    ss << "You have 6 guesses!" << std::endl;
    ss << "Note: Incorrectly placed letters will not care about repeated letters" << std::endl;

    return ss.str();
}

bool Wordle::is_valid_guess(const std::string& word) {
    return word.length() == secret_word.length();
}

bool Wordle::contains_char(char c) {
    return secret_word.find(c) != std::string::npos;
}
