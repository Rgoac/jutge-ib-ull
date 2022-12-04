/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P29253_Roman_numbers_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/12/2022
  * @brief Es un programa que lee varios números romanos (con un punto al final) e imprime su número equivalente.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29253_en
  */

#include <iostream>
#include <string>

int numero_romano (char romano) {
	if (romano == 'I') {
    return 1;
  }
	else if (romano == 'V') {
    return 5;
  }
	else if (romano == 'X') {
    return 10;
  }
	else if (romano == 'L') {
    return 50;
  }
	else if (romano == 'C') {
    return 100;
  }
	else if (romano == 'D') {
    return 500;
  }
	else {
    return 1000;
  }
}

int main () {
	std::string num_romano;
	int suma = 0;
	while (std::cin >> num_romano) {
		int numero = num_romano.size();
		for (int i = 0; i<numero-1; i++) {
			if (num_romano[i+1] == '.') {
        suma += numero_romano (num_romano[i]);
      }
			else {
				if (numero_romano(num_romano[i+1]) > numero_romano(num_romano[i])) {
					suma += numero_romano(num_romano[i+1]) - numero_romano(num_romano[i]);
					i++;
				}
				else {
          suma += numero_romano (num_romano[i]);
        }
			}
		}
		num_romano.pop_back();
		std::cout << num_romano << " = " << suma << std::endl;
		suma = 0;
	}
}
	