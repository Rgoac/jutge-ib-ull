/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P99541_Print_a_line.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que imprime una línea con s espacios seguidos de n caracteres c.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P99541_en
  */

#include <iostream>

void print(int s, char c, int n) {
    for (int i = 0; i<s; i++) {
        std::cout << " ";
    }
    for (int j = 0; j<n; j++) {
        std::cout << c;
    }
    std::cout << std::endl;
}


int main() {
  int s,n;
  char c;
  while (std::cin >> s >> c >> n) {
    print(s, c, n);
  }
}