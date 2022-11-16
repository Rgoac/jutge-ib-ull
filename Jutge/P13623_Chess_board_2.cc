/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P13623_Chess_board_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 12/11/2022
  * @brief Es un programa tal que, dado un tablero de ajedrez, calcula el 
           número total de monedas que hay en sus cuadrados blancos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P13623_en
  */

#include <iostream>

int main () {
	int filas, columnas;
    std::cin >> filas >> columnas;
    char tablero;
    int resultado = 0;
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            std::cin >> tablero;
            if (i%2==j%2) {
              resultado += (int)tablero-'0';
            }
        }
    }
    std::cout << resultado << std::endl;
}