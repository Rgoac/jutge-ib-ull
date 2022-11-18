/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P57474_Iterative_factorial.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 18/11/2022
  * @brief Es un programa que el factorial de un número.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57474_en
  */

#include <iostream>

int factorial (int numero) {
    int resultado = 1;
    for (int i=1; i<=numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main () {
	int numero;
    while (std::cin >> numero) {
        std::cout << factorial(numero) << std::endl;
    }
}