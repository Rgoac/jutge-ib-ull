/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P65103_I-th_3.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 01/12/2022
  * @brief Es un programa que, dado un número entero i y una secuencia de 
           números naturales x1,..., xn, imprime xi.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P65103_en
  */

#include <iostream>

int main() {
	int secuencia;
	int posicion;
	std::cin >> posicion;
	int j = 1;
	int numero = 0 ;
	bool incorrect = true;
	while (std::cin >> secuencia && secuencia != -1) {
		if (j == posicion) {
			numero = secuencia;
			incorrect = false;
		}
	  j++;
	}
	if (!incorrect) {
    std::cout << "At the position " << posicion << " there is a(n) " << numero << ".";
  }
	else {
    std::cout << "Incorrect position.";
  }
	std::cout << std::endl;
}