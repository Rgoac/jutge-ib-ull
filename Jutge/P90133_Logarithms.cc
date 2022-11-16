/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P90133_Logarithms.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 11/11/2022
  * @brief Es un programa que opera logaritmos en varias bases.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90133_en
  */

#include <iostream>

int main() {
    int base,numero;
    while (std::cin >> base >> numero) {
        int i=0;
        int exponencial=1;
        while (exponencial<numero) {
            exponencial = exponencial*base;
            i = i+1;
        }
        if (exponencial == numero) {
            std::cout << i << std::endl;
        }
        else {
            std::cout << i-1 << std::endl;
        }
    }
}