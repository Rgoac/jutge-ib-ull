/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P31111_Parentheses.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 01/12/2022
  * @brief Es un programa que dada una secuencia compuesta únicamente por 
           ‘(’ y ‘)’, decir si los paréntesis cierran correctamente.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111_en
  */

#include <iostream>

int main() {
	char parentesis;
	int estructura = 0;
	bool cerrado = true;
	while (std::cin >> parentesis && cerrado) {
		if (parentesis == '(') {
      estructura++;
    }
		else {
      estructura--;
    }
		if (estructura < 0) {
      cerrado = false;
    }
	}
	if (estructura == 0) {
    std::cout << "yes";
  }
	else if (estructura != 0) {
    std::cout << "no";
  }
	std::cout << std::endl;		
}