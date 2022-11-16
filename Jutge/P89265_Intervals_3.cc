/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P89265_Intervals_3.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que, dados dos intervalos, dice si uno está dentro del otro, y calcula el intervalo correspondiente a su intersección, o dice que está vacío.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89265_en
  */

#include <iostream>

int main () {
	int coordenadax1, coordenaday1, coordenadax2, coordenaday2;
    std::cin >> coordenadax1 >> coordenaday1 >> coordenadax2 >> coordenaday2;
    if (coordenadax1 == coordenadax2 && coordenaday1 == coordenaday2) {
        std::cout << "=";
    }
    else if (coordenadax1 <= coordenadax2 && coordenaday1 >= coordenaday2) {
        std::cout << 2;
    }
    else if (coordenadax1 >= coordenadax2 && coordenaday1 <= coordenaday2) {
        std::cout << 1;
    }
    else {
        std::cout << "?";
    }
    std::cout << " , ";
    
    coordenadax1 = std::max(coordenadax1,coordenadax2);
    coordenaday1 = std::min(coordenaday1,coordenaday2);
    if (coordenadax1>coordenaday1) {
        std::cout << "[]" << std::endl;
    }
    else {
        std::cout << "[" << coordenadax1 << "," << coordenaday1 << "]" << std::endl;
    }
}