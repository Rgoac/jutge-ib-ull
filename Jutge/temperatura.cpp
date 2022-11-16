#include <iostream>

int main() 
{
  int temperature;
  std::cin >> temperature;
  if(temperature >= 10 && temperature <= 30)
  {
      std::cout << "it's ok" << std::endl;
  }
  if(temperature < 10 && temperature > 0)
  {
      std::cout << "it's cold" << std::endl;
  }
    if(temperature <= 0)
  {
      std::cout << "it's cold" << std::endl;
      std::cout << "water would freeze" << std::endl;
  }
    if(temperature > 30 && temperature < 100)
  {
      std::cout << "it's hot" << std::endl;
  }
    if(temperature >= 100)
  {
      std::cout << "it's hot" << std::endl;
      std::cout << "water would boil" << std::endl;
  }
}