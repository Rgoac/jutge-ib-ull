/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P50327_Reversed_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 10/11/2022
  * @brief Es un programa que lee un número y lo imprime al revés.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50327_en
  */

#include <iostream>

int main () {
	std::string numero;
    std::cin >> numero;
    for (int i = numero.size()-1; i >= 0; i--) {
      std::cout << numero[i];
    }
    std::cout << std::endl;
}