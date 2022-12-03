/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P67454_Counting_a's_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/12/2022
  * @brief Es un programa que lee una secuencia de caracteres e imprime el
           número de letras 'a' en la secuencia antes del primer punto.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P67454_en
  */

#include <iostream>

int main() {
  int cuenta = 0;
  char a;
  while (std::cin >> a && a != '.') {
    if (a == 'a') {
      cuenta++;
    }
  }
  std::cout << cuenta << std::endl;
}