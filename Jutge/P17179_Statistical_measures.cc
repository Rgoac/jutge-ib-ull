/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P17179_Statistical_measures.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/12/2022
  * @brief Es un programa que lee secuencias no vacías de números reales y,
           para cada secuencia, imprime su mínimo, su máximo y su promedio.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P17179_en
  */

#include <iostream>
#include <iomanip>

int main () {
	int secuencias;
    std::cin >> secuencias;
    for (int i = 0; i<secuencias; i++){
        int valores;
        std::cin >> valores;
        double media, maximo,minimo,suma_valores;
        std::cin >> maximo;
        minimo = maximo;
        suma_valores = maximo;
        for (int j = 1; j<valores; j++) {
            std::cin >> media;
            maximo = std::max(media,maximo);
            minimo = std::min(media,minimo);
            suma_valores += media;
        }
        std::cout << std::fixed << std::setprecision(4) << minimo << " " << maximo << " " << suma_valores/valores << std::endl;
    }
}