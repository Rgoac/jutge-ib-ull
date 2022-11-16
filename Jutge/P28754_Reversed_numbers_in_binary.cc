/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P28754_Reversed_numbers_in_binary.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 10/11/2022
  * @brief Es un programa que lee un número e imprime su representación binaria invertida.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P28754_en
  */

#include <iostream>

int main () {
	int numero;
    std::cin >> numero;
    while (numero > 1) {
        std::cout << numero%2;
        numero/=2;
    }
    if (numero == 0) {
        std::cout << 0 << std::endl;
    }
    else {
        std::cout << 1 << std::endl;
    }
}