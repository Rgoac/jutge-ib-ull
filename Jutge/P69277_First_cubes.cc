/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P69277_First_cubes.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/11/2022
  * @brief Es un programa que lee un número n e imprime 0³,1³, ... ,(n−1)³,n³.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P69277_en
  */

#include <iostream>

int main () {
	int numero;
    std::cin >> numero;
    for (int intervalo = 0; intervalo < numero; intervalo++) {
      std::cout << intervalo*intervalo*intervalo << ",";
    }
    std::cout << numero*numero*numero << std::endl;
}