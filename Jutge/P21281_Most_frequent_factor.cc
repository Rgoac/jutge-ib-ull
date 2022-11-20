/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P21281_Most_frequent_factor.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que imprime el factor mas frecuente de un numero.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P21281_en
  */

#include <iostream>

void factor(int n, int& f, int& q) {
    int i = 2;
    q = 1;
    f = n;
    while (i*i <= n) {
        int j = 0;
        while (n%i == 0 and n != 0) {
            j++;
            n = n/i;
        }
        if (j>q or (j==q && f>i)) {
            q = j;
            f = i;
        }
        i++;
    }
}

int main() {
  int n;
  while (std::cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    std::cout << f << " " << q << std::endl;
  }
}