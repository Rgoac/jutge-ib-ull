/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P99133_Reversing_words_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 21/11/2022
  * @brief Es un programa que lee palabras y las imprime en orden inverso,
           invirtiendo también el orden de los caracteres de cada palabra.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P99133_en
  */

#include <iostream>
#include <string>
#include <vector>

void reverse_word (const std::string& s) {
    int n = s.size();
    for (int i = n-1; i >= 0; i--) {
        std::cout << s[i];
    }
    std::cout << std::endl;
}

int main() {
    std::string word;
    int numero_palabras;
    std::cin >> numero_palabras;
    std::vector <std::string> words (numero_palabras);
    for (int j = numero_palabras-1; j >= 0; j--) {
        std::cin >> word;
        words[j] = word; 
    }
    for (int i = 0; i<numero_palabras; i++) {
        reverse_word(words[i]);
    }
}