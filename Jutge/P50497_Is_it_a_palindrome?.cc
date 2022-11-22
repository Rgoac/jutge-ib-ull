/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P50497_Is_it_a_palindrome?.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 21/11/2022
  * @brief Es un programa que dice si una palabra es capicua o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50497_en
  */

#include <iostream>

bool is_palindrome (const std::string& s) {
    for (int i = 0; i<s.size()/2; i++) {
        if (s[i]!=s[s.size()-i-1]) {
            return false;
        }
    }
    return true;
}

int main () {
    std::string s;
    while (std::cin >> s) {
        std::cout << is_palindrome(s) << std::endl;
    }
}