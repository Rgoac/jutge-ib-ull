/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P51126_Intervals_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que, dados dos intervalos, calcula el intervalo correspondiente a su intersección, o dice que está vacío.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51126_en
  */

#include <iostream>

int main () {
	int coordenadax1, coordenaday1, coordenadax2,coordenaday2;
    std::cin >> coordenadax1 >> coordenaday1 >> coordenadax2 >> coordenaday2;
    coordenadax1 = std::max(coordenadax1,coordenadax2);
    coordenaday1 = std::min(coordenaday1,coordenaday2);
    if (coordenadax1>coordenaday1) {
        std::cout << "[]" << std::endl;
    }
    else std::cout << "[" << coordenadax1 << "," << coordenaday1 << "]" << std::endl;
}