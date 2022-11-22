/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P67268_Reverse_of_sequences.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 21/11/2022
  * @brief Es un programa que lee secuencias de números enteros e imprime cada uno invirtiendo el orden de sus elementos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P67268_en
  */

#include <iostream>
#include <vector>

int main() {
    int numero;
    while (std::cin >> numero) {
        std::vector<int> v(numero);
        for (int k = 0; k<numero; k++) {
            std::cin >> v[k];
        }
        int auxiliar;
        for (int i = 0; i<numero/2; i++) {
            auxiliar = v[i];
            v[i] = v[numero-i-1];
            v[numero-i-1] = auxiliar;
        }
        for (int j = 0; j<numero; j++) {
            std::cout << v[j];
            if (j != numero-1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}