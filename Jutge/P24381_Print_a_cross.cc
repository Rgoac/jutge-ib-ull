/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P24381_Print_a_cross.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que imprime una cruz n*n con el carácter c.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P24381_en
  */

#include <iostream>

void cross(int n, char c) {
	for (int i = 0; i<(n-1)/2; i++) {
		for (int j = 0; j<(n-1)/2; j++) {
            std::cout << " ";
        }
		std::cout << c << std::endl;
	}
	for (int j = 0; j<n; j++) {
        std::cout << c;
    }
	std::cout << std::endl;
	for (int i = 0; i<(n-1)/2; i++) {
		for (int j = 0; j<(n-1)/2; j++) {
            std::cout << " ";
        }
		std::cout << c << std::endl;
	}
}

int main() {
  int n;
  char c;
  while (std::cin >> n >> c) {
    cross(n, c);
  }
}