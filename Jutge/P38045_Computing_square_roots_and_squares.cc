/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P38045_Computing_square_roots_and_squares.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 18/11/2022
  * @brief Es un programa que lee una secuencia de números naturales, e imprime el cuadrado y la raíz cuadrada de cada uno.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P38045_en
  */

#include <iostream>
#include <iomanip>
#include <cmath>

int main () {
	double numero;
    while (std::cin >> numero) {
        std::cout << std::fixed << std::setprecision(0)<< numero*numero << std::fixed << std::setprecision(6) << " " << sqrt(numero) << std::endl;
    }
}