/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P77686_Palindromic_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 19/11/2022
  * @brief Es un programa que dice si el número es un número capicua o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P77686_en
  */

#include <iostream>
#include <sstream>

bool is_palindromic (int n) {
    std::stringstream ss;
    ss << n;
    std::string s;
    ss >> s;
    bool b = 1;
    for (int i = 0; i < s.size(); i++) {
        b = b and (s[i]==s[s.size()-i-1]);
    }
    return b;
}

int main () {
	int n;
    while (std::cin >> n) {
        if (is_palindromic(n)) {
            std::cout << "true" << std::endl;
        }
        else {
            std::cout << "false" << std::endl;
        }
    }
}