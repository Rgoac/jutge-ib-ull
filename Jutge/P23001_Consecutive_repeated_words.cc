/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P23001_Consecutive_repeated_words.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/12/2022
  * @brief Es un programa que dada una secuencia de palabras, imprime la longitud 
           de la subsecuencia consecutiva más larga que solo contiene la primera palabra.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P23001_en
  */

#include <iostream>

int main () {
	std::string palabra, repeticion;
  std::cin >> palabra;
  int cuenta = 1, maximo = 1;
  while (std::cin >> repeticion) {
    if (repeticion==palabra) {
      cuenta++;
    }
    else {
      if (cuenta > maximo) {
        maximo = cuenta;
      }
      cuenta = 0;
    }
  }
  std::cout << std::max(cuenta,maximo) << std::endl;
}