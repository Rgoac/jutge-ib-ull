/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P12061_Words_between_two_words.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/12/2022
  * @brief Es un programa que, dada una secuencia de palabras, imprime el número de palabras entre la palabra “beginning” y la palabra “end”.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P12061_en
  */

#include <iostream>
#include <string>

int main() {
  std::string beginning_end;
  int palabras = 0;
  bool estructura_correcta = false;
  while (!estructura_correcta && std::cin >> beginning_end) {
    if (beginning_end == "beginning") {
      palabras++;
      while (std::cin >> beginning_end && beginning_end != "end") {
        palabras++;
      }
      if (beginning_end == "end") {
        estructura_correcta = true;
      }
    }
    if (beginning_end == "end") {
      estructura_correcta = true;
    }        
  }
  if (!estructura_correcta or palabras == 0) {
    std::cout << "wrong sequence";
  }
  else {
    std::cout << (palabras - 1);
  }
  std::cout << std::endl;
}