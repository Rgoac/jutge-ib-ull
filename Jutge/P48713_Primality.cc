/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P48713_Primality.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 01/12/2022
  * @brief Es un programa que lee una secuencia de números naturales y, para 
           cada uno, dice si es un número primo o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713_en
  */

#include <iostream>
#include <cmath>

bool primo (int numero) {
    if (numero <= 1) {
      return false;
    }
    if (numero == 2) {
      return true;
    }
    if (numero%2 == 0) {
      return false;
    }
    for (int i = 3; i <= sqrt(numero); i+=2) {
      if (numero%i == 0) {
        return false;
      }
    }
    return true;
}

int main () {
	int numero;
    std::cin >> numero;
    for (int i = 0; i < numero; i++) {
        int numero_primo;
        std::cin >> numero_primo;
        if (primo(numero_primo)) {
          std::cout << numero_primo << " is prime" << std::endl;
        }
        else {
          std::cout << numero_primo << " is not prime" << std::endl;
        }
    }
}