#include<iostream>

int main() {
  int number1;
  int number2;

  std::cin >> number1 >> number2;
  if (number1 > number2)
    {
      std::cout <<""<< number1 << std::endl;
    }
    else
    {
      std::cout <<""<< number2 << std::endl;
    }
  return 0;
}