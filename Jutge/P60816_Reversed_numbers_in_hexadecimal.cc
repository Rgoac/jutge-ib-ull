/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P60816_Reversed_numbers_in_hexadecimal.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 10/11/2022
  * @brief Es un programa que lee un número e imprime su representación hexadecimal al revés.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P60816_en
  */

#include <iostream>

int main () {
	int numero;
    std::cin >> numero;
    while (numero > 15) {
        int hexadecimal = numero%16;
        numero /=16;
        if (hexadecimal >= 10) {
            std::cout << (char)(hexadecimal+'A'-10);
        }
        else {
            std::cout << hexadecimal;
        }
    }
    if (numero >= 10) {
        std::cout << (char)(numero+'A'-10) << std::endl;
    }
    else {
        std::cout << numero << std::endl;
    }
}