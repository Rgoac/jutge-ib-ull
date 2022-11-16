/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P55622_Number_of_digits_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que lee un número e imprime su número de dígitos.
  * @bug There are no known bugs
  * @see hhttps://jutge.org/problems/P55622_en
  */

#include <iostream>

int main () {
  std::string numero;
  std::cin >> numero;
  std::cout << "The number of digits of " << numero << " is " << numero.size() << "." << std::endl;
}