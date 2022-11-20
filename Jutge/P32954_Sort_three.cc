/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P32954_Sort_three.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que imprime los valores introducidos en orden creciente.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P32954_en
  */

#include <iostream>

void sort3(int& a, int& b, int& c) {
    if (a > b) {
        std::swap(a,b);
    }
    if (b > c) {
        std::swap(b,c);
    }
    if (a > b) {
        std::swap(a,b);
    }
    return;
}

int main () {
	int a,b,c;
    while (std::cin >> a) {
        std::cin >> b >> c;
        sort3(a,b,c);
        std::cout << a << " " << b << " " << c << std::endl;
    }
}