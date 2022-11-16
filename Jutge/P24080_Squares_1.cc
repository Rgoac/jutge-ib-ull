/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P24080_Squares_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 14/11/2022
  * @brief Es un programa que imprime cuadrados con n² n's.
  * @see https://jutge.org/problems/P24080_en
  */

#include <iostream>

int main() {
    int lado;
    int k {0};
    while (std::cin >> lado) {
        if (k == 0) {
          k = 1;
        }
        else {
          std::cout << std::endl;
        }
        for (int i {0}; i<lado; i++) {
            for (int j {0}; j<lado; j++) {
                std::cout << lado;
            }
            std::cout << std::endl;
        }
    }
}