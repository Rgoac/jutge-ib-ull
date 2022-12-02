/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P18203_Fermat's_last_theorem_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/12/2022
  * @brief Es un programa que, dados cuatro números naturales a,b,c,d con a ≤ b y c ≤ d, 
           imprime una solución natural a la ecuación: x³ + y³ = z³; tal que a ≤ x ≤ b, y, c ≤ y ≤ d.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P18203_en
  */

#include <iostream>

int main () {
  int a, b, c, d;
  while (std::cin >> a >> b >> c >> d) {
    if (a <= 0 && b >=0) {
      if (c <= 0 && d >= 0) {
        std::cout << "0^3 + 0^3 = 0^3" << std::endl;
        return 0;
      }
      std::cout << "0^3 + " << c << "^3 = " << c << "^3" << std::endl;
      return 0;
    }
    if (c <= 0 and d >= 0) {
      std::cout  << a << "^3 + 0^3 = " << a << "^3" << std::endl;
      return 0;
    }
  }
  std::cout << "No solution!" << std::endl;
}