/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P57846_Maximum_of_two_integer_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 18/11/2022
  * @brief Es un programa que devuelve el máximo de dos números enteros.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57846_en
  */

#include <iostream>

int max2 (int numero1, int numero2) {
    return std::max(numero1, numero2);
    }

int main () {
    int numero1, numero2;
    std::cin >> numero1 >> numero2;
    std::cout << std::max(numero1, numero2) << std::endl;
}
