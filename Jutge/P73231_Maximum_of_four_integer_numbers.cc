/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P73231_Maximum_of_four_integer_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 18/11/2022
  * @brief Es un programa que devuelve el máximo de cuatro números enteros.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P73231_en
  */

#include <iostream>

int max4 (int numero1, int numero2, int numero3, int numero4) {
    return std::max(std::max(numero1,numero2),std::max(numero3,numero4));
    }

int main () {
	int numero1, numero2, numero3, numero4;
    std::cin >> numero1 >> numero2 >> numero3 >> numero4;
    std::cout << std::max(std::max(numero1,numero2),std::max(numero3,numero4)) << std::endl;
}