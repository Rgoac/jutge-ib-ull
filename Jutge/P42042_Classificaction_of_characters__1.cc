/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P42042_Classificaction_of_characters_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/11/2022
  * @brief Es un programa que lee una letra, y dice si es una letra mayúscula o minúscula, a la vez que dice si es una vocal o una consonante.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P42042_en
  */

#include <iostream>

int main () {
    char letra;
    std::cin >> letra;
    
    if (65 <= letra && letra <= 90) {
       std::cout << "uppercase" << std::endl;
    }
    else if (97 <= letra && letra <= 122) {
       std::cout << "lowercase" << std::endl;
    }
        switch (letra) {
        case 'a': std::cout << "vowel" << std::endl; break;
        case 'e': std::cout << "vowel" << std::endl; break;
        case 'i': std::cout << "vowel" << std::endl; break;
        case 'o': std::cout << "vowel" << std::endl; break;
        case 'u': std::cout << "vowel" << std::endl; break;
        case 'A': std::cout << "vowel" << std::endl; break;
        case 'E': std::cout << "vowel" << std::endl; break;
        case 'I': std::cout << "vowel" << std::endl; break;
        case 'O': std::cout << "vowel" << std::endl; break;
        case 'U': std::cout << "vowel" << std::endl; break;
        default: std::cout << "consonant" << std::endl;
        }
}