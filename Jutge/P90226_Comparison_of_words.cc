/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P90226_Comparison_of_words.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 05/11/2022
  * @brief Es un programa que lee dos palabras y dice su orden lexicográfico.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90226_en
  */

#include <iostream>

int main () {
    std::string palabra1, palabra2;
    std::cin >> palabra1 >> palabra2;
    if (palabra1 == palabra2) {
        std::cout << palabra1 << " = " << palabra2 << std::endl;
    }
    else if (palabra1 < palabra2) {
        std::cout << palabra1 << " < " << palabra2 << std::endl;
    }
    else {
        std::cout << palabra1 << " > " << palabra2 << std::endl;
    }
}