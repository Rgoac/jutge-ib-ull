#include <iostream>

int main() 
{
  int años;
  int dias;
  int horas;
  int minutos;
  int segundos;

  std::cin >> años >> dias >> horas >> minutos >> segundos;
  int year=años*365*24*3600;
  int days=dias*24*3600;
  int hours=horas*3600;
  int minutes=minutos*60;
  std::cout << year + days + hours + minutes + segundos << std::endl;
  return 0;
}