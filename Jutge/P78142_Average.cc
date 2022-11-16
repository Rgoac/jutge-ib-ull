/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P78142_Average.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/11/2022
  * @brief Es un programa que lee una secuencia de números e imprime su media.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P78142_en
  */

#include <iostream>
#include <iomanip>

int main () {
	double numeros, mean = 0.0, total = 0.0;
    while (std::cin >> numeros) {
        total += numeros;
        mean++;
    }
    mean = total/mean;
    std::cout << std::fixed << std::setprecision(2) << mean << std::endl;
}