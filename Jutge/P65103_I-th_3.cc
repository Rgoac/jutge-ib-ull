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

int main () {
	int numero;
  int posicion;
  bool posicion_correcta = false;
  std::cin >> posicion;
  int secuencia = posicion;
  while (std::cin >> numero) {
    if (--posicion == 0) {
      std::cout << "At the position " << secuencia << " there is a(n) " << numero << "." << std::endl;
      posicion_correcta = true;
      break;
    }
  }
  if (!posicion_correcta) {
    std::cout << "Incorrect position." << std::endl;
  }
}