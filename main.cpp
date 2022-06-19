#include "wordle.h"

int main()
{
  Wordle wordle("dict.txt");
  std::cout << Wordle::get_rules() << std::endl;

  // ...
}
