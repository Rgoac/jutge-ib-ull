/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P89078_First_position.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 01/12/2022
  * @brief Es un programa que lee una secuencia de números naturales e imprime
           la posición del primer número par.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078_en
  */

#include <iostream>

int main () {
    long long numero;
    int par = 0;
    while (std::cin >> numero) {
        par++;
        if (numero%2 == 0) {
            std::cout << par << std::endl;
            break;
        }
    }
}