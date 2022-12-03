/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P89851_Which_is_missing?.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/12/2022
  * @brief Es un programa que lee secuencias con todos los números entre
           1 y n menos uno, y dice cuál falta.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89851_en
  */

#include <iostream>

int main() {
	int numero_de_valores;
	int secuencia;
	while (std::cin >> numero_de_valores) {
    int suma = 0;
    for (int i = 0; i <numero_de_valores-1; i++) {
		  std::cin >> secuencia;
      suma = suma + secuencia;
	  }
	  std::cout << ((numero_de_valores*(numero_de_valores+1))/2)-suma << std::endl;
  }
}