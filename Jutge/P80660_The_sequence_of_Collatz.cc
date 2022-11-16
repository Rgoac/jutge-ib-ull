/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P80660_The_sequence_of_Collatz.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 11/11/2022
  * @brief Es un programa que imprime el número de pasos que se necesitan para llegar a 1 para cada numero dado.
  * @see https://jutge.org/problems/P72484_en
  */

#include <iostream>

int collatz(int numero) {
	if (numero==1) {
        return 0;
    }
	else if (numero%2==0) {
        return 1 + collatz(numero/2);
    }
	else {
        return 1 + collatz(3*numero+1);
    }
}
int main() {
	int numero;
	while (std::cin >> numero) {
		std::cout << collatz(numero) << std::endl;
	}
}