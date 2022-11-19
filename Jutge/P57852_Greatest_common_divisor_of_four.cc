/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P57852_Greatest_common_divisor_of_four.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 19/11/2022
  * @brief Es un programa que calcula el máximo común divisor de cuatro números naturales utilizando la versión rápida del algoritmo euclidiano.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57852_en
  */

#include <iostream>

int gcd (int a,int b) {
    if (b==0) {
        return a;
    }
    return gcd(b,a%b);
}

int gcd4 (int a,int b, int c, int d) {
    return gcd(gcd(a,b),gcd(c,d));
}

int main () {
	int a,b,c,d;
    while (std::cin >> a) {
        std::cin >> b >> c >> d;
        std::cout << gcd4(a,b,c,d) << std::endl;
    }
}