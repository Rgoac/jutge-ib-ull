#include <iostream>

int main() 
{
  int number1;
  int number2;
  int number3;

  std::cin >> number1 >> number2 >> number3;
  if(number1 >= number2 && number1 >= number3)
  {
      std::cout <<""<< number1 << std::endl;
  }

  else if(number2 >= number1 && number2 >= number3)
  {
      std::cout <<""<< number2 << std::endl;
  } 
  else if (number3 >= number1 && number3 >= number2)
  {
      std::cout <<""<< number3 << std::endl;
  }
}