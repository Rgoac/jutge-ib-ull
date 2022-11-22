/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P78548_Reversing_words_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 21/11/2022
  * @brief Es un programa que lee palabras e imprime cada una invirtiendo el orden de sus caracteres.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P78548_en
  */

#include <iostream>
#include <string>

int main() {
    std::string word;
    while (std::cin >> word) {
        int n = word.size();
        for (int i = n-1; i >= 0; i--) {
            std::cout << word[i];
        }
        std::cout << std::endl;
    }
}
