/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P87920_Equal_to_the_sum_of_the_rest_II.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 22/11/2022
  * @brief Es un programa que, dada una secuencia de números enteros,
           dice si existe algún número igual a la suma de los demás.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P87920_en
  */

#include <iostream>
#include <vector>

bool comp (std::vector <int>& v, int r) {
    for (auto it : v) {
        if (r-it==it) {
            return true;
        }
    }
    return false;
}

int main () {
    int n;
    while (std::cin >> n) {
        std::vector <int> v (n);
        int r = 0;
        while (n--) {
            std::cin >> v[n];
            r += v[n];
        }
        if (comp(v,r)) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}