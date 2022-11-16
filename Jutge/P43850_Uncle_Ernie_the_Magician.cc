/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P43850_Uncle_Ernie_the_Magician.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 08/11/2022
  * @brief Es un programa que "adivina" el número que el usuario piensa,
           mediante operaciones matemáticas que realiza hasta llegar a un
           resultado, que sera el input del programa.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P43850_en
  */

#include <iostream>

int main () {
    long long int numero;
    while (std::cin >> numero) {
        std::cout << (numero-165)/100 << std::endl; // 165=(((6*4)+9)*5)
        }
}