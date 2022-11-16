/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P19991_Chess_board_3.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 13/11/2022
  * @brief Es un programa tal que, dado un tablero de ajedrez, calcula el 
           número total de monedas que hay en sus diagonales.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P19991_en
  */

#include <iostream>

int main () {
	int numero;
    char tablero;
    int resultado=0;
    std::cin >> numero;
    for (int i=0; i<numero; i++) {
        for (int j=0; j<numero; j++) {
            std::cin >> tablero;
            if (i==j or i+j==numero-1) {
                resultado += (int)tablero-'0';
            }
        }
    }
    std::cout << resultado << std::endl;
}