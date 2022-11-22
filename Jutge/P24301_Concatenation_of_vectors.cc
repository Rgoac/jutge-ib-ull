/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P24301_Concatenation_of_vectors.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 21/11/2022
  * @brief Es un programa que devuelve la concatenación de v1 y v2.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P24301_en
  */

#include <iostream>
#include <vector>

std::vector <int> concatenation(const std::vector <int> & V1, const std::vector <int> & V2) {
    int n = V2.size();
    int m = V1.size();
    std::vector <int> concatenacion(n+m);
    for (int i = 0; i<m; i++) {
        concatenacion[i] = V1[i];
    }
    for (int i = 0; i<n; i++) {
        concatenacion[i+m] = V2[i];
    }
    return concatenacion;
}

int main () {}