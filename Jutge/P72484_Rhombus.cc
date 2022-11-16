/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P72484_Rhombus.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 11/11/2022
  * @brief Es un programa tal que, dado un número n, imprime un “rombo de tamaño n”.
  * @see https://jutge.org/problems/P72484_en
  */

#include <iostream>

int main () {
	int lineas;
    std::cin >> lineas;
    for (int i=1; i<=lineas; i++) {
        for (int j=0; j<lineas-i; j++) {
            std::cout << " ";
        }
        for (int j=0; j<i*2-1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i=1; i<lineas; i++) {
        for (int j=0; j<i; j++) {
            std::cout << " ";
        }
        for (int j=0; j<(lineas-i)*2-1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}