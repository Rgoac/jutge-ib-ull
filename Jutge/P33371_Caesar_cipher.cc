/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P33371_Caesar_cipher.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/12/2022
  * @brief Es un programa que cifra los mensajes con el “Cifrado César”, 
           utilizado por Julio César para comunicarse con sus generales.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P33371_en
  */

#include <iostream>

char encoded(char c, int k) {
	if (c - 'a' >= 0 && c - 'a' <= 25) {
	  k = k%26;
	  int variable_codificadora = ((int)c - (int)'a' + k)%26;
	  c = 'A' + variable_codificadora;	    
	}
  return c;
}

int main() {
	int k;
	char c;
	while (std::cin >> k) {
		while (std::cin >> c && c != '.') {
			if (c == '_') {
        std::cout << " ";
      }
			else std::cout << encoded(c, k);
		}
		std::cout << std::endl;
	}
}