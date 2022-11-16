/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P31170_Multiplication_table.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/11/2022
  * @brief Es un programa que lee un número n e imprime la "tabla de multiplicar" de n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31170_en
  */

#include <iostream>

int main () {
	int numero;
    std::cin >> numero;
    for (int intervalo = 1; intervalo <= 10; intervalo++) {
      std::cout << numero << "*" << intervalo << " = " << numero*intervalo << std::endl;
    }
}