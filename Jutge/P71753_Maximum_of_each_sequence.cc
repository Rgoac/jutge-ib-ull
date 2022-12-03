/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P71753_Maximum_of_each_sequence.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/12/2022
  * @brief Es un programa que lee secuencias de números enteros e imprime
           el valor máximo de cada secuencia.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71753_en
  */

#include <iostream>

int main () {
	int numero;
  while (std::cin >> numero) {
    int secuencia, maximo;
    std::cin >> maximo;
    for (int i = 1; i < numero; i++) {
      std::cin >> secuencia;
      maximo = std::max (secuencia,maximo);
    }
    std::cout << maximo << std::endl;
  }
}