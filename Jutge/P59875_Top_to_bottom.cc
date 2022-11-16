/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P59875_Top_to_bottom.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/11/2022
  * @brief Es un programa que lee dos números x e y, e imprime todos los números entre x e y (o entre y y x), en orden decreciente.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59875_en
  */

#include <iostream>

int main () {
	int numero1,numero2;
    std::cin >> numero1 >> numero2;
    if (numero1 > numero2) {
        std::swap (numero1,numero2);
    }
    for (int intervalo = numero2; intervalo >= numero1; intervalo--) {
        std::cout << intervalo << std::endl;
    }
}