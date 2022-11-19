/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P88790_Iterative_greatest_common_divisor.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 19/11/2022
  * @brief Es un programa que calcula el máximo común divisor de dos números naturales utilizando la versión rápida del algoritmo euclidiano.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P88790_en
  */

#include <iostream>

int gcd (int a,int b) {
    if (b==0) {
        return a;
    }
    return gcd(b,a%b);
}

int main () {
	int a,b;
    while (std::cin >> a) {
        std::cin >> b;
        std::cout << gcd(a,b) << std::endl;
    }
}