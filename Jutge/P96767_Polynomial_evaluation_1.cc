/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P96767_Polynomial_evaluation_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 06/11/2022
  * @brief Es un programa que lee un número x y un polinomio p(z) = c0z0 + c1z1 + ⋯ + cnzn, y calcula p(x).
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96767_en
  */

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

int main () {
	int polinomio = 0;
    double x, numero, resultado = 0;
    std::cin >> x;
    while (std::cin >> numero) {
        resultado += numero*std::pow(x,polinomio);
        polinomio++;
    }
    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
}