/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P37760_Trigonometry.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 18/11/2022
  * @brief Es un programa que lee una secuencia de ángulos en grados e imprime su seno y su coseno.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37760_en
  */

#include <iostream>
#include <iomanip>
#include <cmath>

int main () {
	double angulo;
    const double trigonometria = atan(1)/45;
    while (std::cin >> angulo) {
        std::cout << std::fixed << std::setprecision(6) << sin(angulo*trigonometria) << ' ' << cos(angulo*trigonometria) << std::endl;
    }
}