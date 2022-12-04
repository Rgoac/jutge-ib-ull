/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P18298_Roman_numbers_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/12/2022
  * @brief Es un programa que lee varios números e imprime su número romano equivalente.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P18298_en
  */

#include <iostream>

void numero_romano (int numero, char I, char V, char X) {
	if (numero == 0);
	else if (numero == 1) {
    std::cout << I;
  }
	else if (numero == 2) {
    std::cout << I << I;
  }
  else if (numero == 3) {
    std::cout << I << I << I;
  }
	else if (numero == 4) {
    std::cout << I << V;
  }
	else if (numero == 5) {
    std::cout << V;
  }
	else if (numero == 6) {
    std::cout << V << I;
  }
	else if (numero == 7) {
    std::cout << V << I << I;
  }
	else if (numero == 8) {
    std::cout << V << I << I << I;
  }
	else if (numero == 9) {
    std::cout << I << X;
  }
	else {
    std::cout << X;
  }
}

int main() {
	int numero;
	while (std::cin >> numero) {
		std::cout << numero << " = ";
		numero_romano (numero/1000, 'M', ' ', ' ');
		numero_romano (numero/100 - (numero/1000)*10, 'C', 'D', 'M');
		numero_romano (numero/10 - (numero/100)*10, 'X', 'L', 'C');
		numero_romano (numero%10, 'I', 'V', 'X');
		std::cout << std::endl;
	}
}