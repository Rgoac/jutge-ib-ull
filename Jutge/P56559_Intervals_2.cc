/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P56559_Intervals_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que, dados dos intervalos, dice si uno está dentro del otro.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P56559_en
  */

#include <iostream>

int main () {
	int coordenadax1, coordenaday1, coordenadax2, coordenaday2;
    std::cin >> coordenadax1 >> coordenaday1 >> coordenadax2 >> coordenaday2;
    if (coordenadax1 == coordenadax2 && coordenaday1 == coordenaday2) {
        std::cout << "=" << std::endl;
    }
    else if (coordenadax1 <= coordenadax2 && coordenaday1 >= coordenaday2) {
        std::cout << 2 << std::endl;
    }
    else if (coordenadax1 >= coordenadax2 && coordenaday1 <= coordenaday2) {
        std::cout << 1 << std::endl;
    }
    else {
        std::cout << "?" << std::endl;
    }
}