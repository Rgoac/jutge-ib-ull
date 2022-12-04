/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P89872_Second_maximum_word.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/12/2022
  * @brief Es un programa que imprime la segunda palabra más grande, en orden 
           alfabético, de una secuencia dada de palabras, ignorando las repeticiones.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89872_en
  */

#include <iostream>
#include <string>

int main () {
  std::string in, a="_", b=a;
  while (std::cin >> in) {
    if (in>b && in != a) {
      b = in;
    }
    if (a<b) {
      std::swap(a,b);
    }
  }
  std::cout << b << std::endl;
}