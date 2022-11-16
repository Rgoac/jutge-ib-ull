/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P72986_Polynomial_evaluation_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 10/11/2022
  * @brief Es un programa que lee un número x y un polinomio p(z) = c0z0 + c1z1 + ⋯ + cnzn, y calcula p(x).
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P72986_en
  */

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

int main () {
    double x, numero, resultado = 0;
    std::cin >> x;
    std::vector <double> vector;
    while (std::cin >> numero) {
      vector.push_back(numero);
    }
    for (int i = 0; i < vector.size(); i++) {
      resultado += vector[i]*std::pow(x,vector.size()-1-i);
    }
    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
}