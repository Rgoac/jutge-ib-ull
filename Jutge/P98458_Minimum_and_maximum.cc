/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P98458_Minimum_and_maximum.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que imprime el mínimo y el máximo de los valores introducidos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P98458_en
  */

#include <iostream>

void min_max(int a, int b, int& mn, int& mx) {
    mn = std::min(a,b);
    mx = std::max(a,b);
    return;
}

int main () {
	int a,b,mn,mx;
    while (std::cin >> a) {
        std::cin >> b;
        min_max(a,b,mn,mx);
        std::cout << mn << " " << mx << std::endl;
    }
}