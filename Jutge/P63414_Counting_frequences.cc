/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P63414_Counting_frequences.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 22/11/2022
  * @brief Es un programa que lee una secuencia de números naturales 
           y que imprime, para cada uno, cuantas veces aparece.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P63414_en
  */

#include <iostream>
#include <map>

int main () {
    int n;
    std::cin >> n;
    std::map <int,int> m;
    while (n--) {
        int p;
        std::cin >> p;
        m[p]++;
    }
    for (auto it = m.begin(); it != m.end(); it++) {
        std::cout << it->first << " : " << it->second << std::endl;
    }
}