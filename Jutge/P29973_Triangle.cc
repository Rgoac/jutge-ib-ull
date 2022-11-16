/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P29973_Triangle.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 11/11/2022
  * @brief Es un programa que, dado un número n, imprime un “triángulo de tamaño n”.
  * @see https://jutge.org/problems/P29973_en
  */

#include <iostream>

int main () {
	int lineas;
    std::cin >> lineas;
    for (int i=1; i<=lineas; i++) {
        for (int j=0; j<i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}