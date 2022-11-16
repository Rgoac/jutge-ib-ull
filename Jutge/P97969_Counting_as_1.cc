/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P97969_Counting_a's_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que lee una secuencia de caracteres terminados con un punto e imprime el número de letras 'a' en la secuencia.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97969_en
  */

#include <iostream>

int main () {
	char caracteres = ' ';
    int veces_a = 0;
    while (caracteres != '.') {
        std::cin >> caracteres;
        if (caracteres == 'a') veces_a++;
    }
    std::cout << veces_a << std::endl;
}