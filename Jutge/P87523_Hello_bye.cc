/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P87523_Hello_bye.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/12/2022
  * @brief Es un programa que lee una secuencia de letras que termina con un punto
           y dice si contiene la sucesión de letras consecutivas 'h', 'e', ​​'l', 'l', 'o' o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P87523_en
  */

#include <iostream>

int main() {
  char frase; 
  std::cin >> frase;
  bool hello = false;
  while (frase != '.') {
    if (frase == 'h') {
      std::cin >> frase;
        if (frase == 'e') {
          std::cin >> frase;
            if (frase == 'l') {
              std::cin >> frase;
                if (frase == 'l') {
                  std::cin >> frase;
                    if (frase == 'o') {
                      hello = true;
                    }
                }
            }
        }
    }
    else std::cin >> frase;
  }
  if (hello) {
    std::cout << "hello";
  }
  else {
    std::cout << "bye";
  }
  std::cout << std::endl;
}