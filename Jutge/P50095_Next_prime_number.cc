/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P50095_Next_prime_number.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 01/12/2022
  * @brief Es un programa que lee una secuencia de números primos y, para cada 
           uno, imprime el siguiente número primo.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50095_en
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

int primo_siguiente (int numero) {
	int i = numero+1;
	while (!primo(i)) {
    i++;
  }
    return i;
}

int main() {
	int numero;
	while (std::cin >> numero) {
		if (primo(numero)) {
      std::cout << primo_siguiente(numero) << std::endl;
    }
	}
}