/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P36430_Fermat's_last_theorem_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/12/2022
  * @brief Es un programa que, dados cuatro números naturales a,b,c,d con a ≤ b y c ≤ d, 
           imprime una solución natural a la ecuación: x² + y² = z²; tal que a ≤ x ≤ b, y, c ≤ y ≤ d.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P36430_en
  */

#include <iostream>
#include <cmath>

int main () {
  int a,b,c,d;
  std::cin >> a >> b >> c >> d;
  for (int x = a; x <= b; x++) {
    for (int y = c; y <= d; y++) {
      double zz = x*x+y*y;
      int modulo = sqrt(zz);
      if (modulo*modulo==zz) {
        std::cout << x << "^2 + " << y << "^2 = " << modulo << "^2" << std::endl;
        return 0;
      }
    }
  }
  std::cout << "No solution!" << std::endl;
}