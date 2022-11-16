/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P79784_Movements_on_the_ground.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 10/11/2022
  * @brief Es un programa que lee una secuencia de caracteres, cada uno de los
           cuales codifica un movimiento ('n' para el norte, 's' para el sur, 
           'e' para el este y 'w' para el oeste), y que calcula la posición 
           final de un objeto inicialmente ubicado en (0, 0).
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P79784_en
  */

#include <iostream>

int main () {
    std::string parametros;
    std::cin >> parametros;
    int x = 0, y = 0;
    for (auto coordenadas : parametros)
        if (coordenadas == 'n') --y;
        else if (coordenadas == 's') ++y;
        else if (coordenadas == 'e') ++x;
        else --x;
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}