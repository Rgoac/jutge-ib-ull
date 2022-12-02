/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P75149_Looking_for_an_a.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 01/12/2022
  * @brief Es un programa que lee una secuencia de caracteres terminados en un punto 
		   y dice si la secuencia tiene alguna 'a' minúscula o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75149_en
  */

#include <iostream>

int main () {
    char palabra = '0';
    bool a = false;
    while ( palabra!= '.') {
        std::cin >> palabra;
        if (palabra=='a') {
            a = true;
            break;
        }
    }
    if (a) {
		std::cout << "yes" << std::endl;
	}
    else {
		std::cout << "no" << std::endl;
	}
}