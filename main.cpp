#include <string>
#include <iostream>

/// is_odd main function
int main(int argc, char* argv[])
{
  if (argc == 1){
      std::cout << "No correct input, shame on you!\n";
      return 1;
  }

  try
  {
    const int number = std::stoi(argv[1]);
    const int modulo = number % 2;
    if(modulo == 1){
        std::cout << "true\n";
    }
    if(modulo == 0){
        std::cout << "false\n";
    }
  }

  catch (const std::invalid_argument&){
    std::cout << "No correct input, shame on you!\n";
    return 1;
  }

  catch (const std::out_of_range&){
    std::cout << "No correct input, shame on you!\n";
    return 1;
  }
}
