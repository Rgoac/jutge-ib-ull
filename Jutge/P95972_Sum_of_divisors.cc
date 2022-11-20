/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P95972_Sum_of_divisors.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que devuelve la suma de los divisores de un número.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P95972_en
  */

#include <iostream>
#include <cmath>

int sum_divisors(int x) {
    int resultado = 0;
    int numero = int(ceil(sqrt(x)));
    for (int i = 1; i<numero; i++) {
        if (x%i == 0) {
            resultado += i + x/i;
        }
        if (sqrt(x)-numero == 0.0) {
            resultado += numero;
        }
    }
    return resultado;
}

int main () {
    int numero;
    while (std::cin >> numero) {
        std::cout << sum_divisors(numero) << std::endl;
    }
}