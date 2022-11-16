/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P42280_Chess_board_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 12/11/2022
  * @brief Es un programa tal que, dado un tablero de ajedrez, calcula el número total de monedas que hay en él.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P42280_en
  */

#include <iostream>

int main() {
	int filas, columnas;
	std::cin >> filas >> columnas;
	int suma=0;
	for (int i=0; i<filas; i++) {
		for (int j=0; j<columnas; j++) {
		char lineas;
		std::cin >> lineas;
		int caracteres = lineas - '0';
		suma = suma + caracteres;
		}
	}
	std::cout << suma << std::endl;;
}