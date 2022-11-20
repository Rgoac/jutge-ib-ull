/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P65437_Swap.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que intercambia el valor de sus parámetros.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P65437_en
  */

#include <iostream>

void swap2(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
    return;
}

int main () {
	int a,b;
    while (std::cin >> a) {
        std::cin >> b;
        swap2(a,b);
        std::cout << a << " " << b << std::endl;
    }
}