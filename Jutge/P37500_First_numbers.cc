/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P37500_First_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/11/2022
  * @brief Es un programa que lee un número n e imprime todos los números entre 0 y n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37500_en
  */

#include <iostream>

int main () {
	int numero;
    std::cin >> numero;
    for (int i=0; i<=numero; i++) {
        std::cout << i << std::endl;
    }
}