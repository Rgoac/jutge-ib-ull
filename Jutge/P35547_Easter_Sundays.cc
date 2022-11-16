/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P35547_Easter_Sundays.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 08/11/2022
  * @brief Es un programa que calcula el día y el mes del domingo de Pascua de cada año.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P35547_en
  */

#include <iostream>

int main () {
    int año;
    while (std::cin >> año) {
        int k = año/100;
        int x = año%19;
        int b = año%4;
        int c = año%7;
        int q = k/4;
        int p = (13+8*k)/25;
        int y = (15-p+k-q)%30;
        int z = (19*x+y)%30;
        int n = (4+k-q)%7;
        int e = (2*b+4*c+6*z+n)%7;
        
        if ( z+e <= 9) {
            std::cout << 22+z+e << "/3" << std::endl;
        }
        else if (z==29 && e==6) {
            std::cout << "19/4" << std::endl;
        }
        else if (z==28 && e==6 && x>10) {
            std::cout << "18/4" << std::endl;
        }
        else {
            std::cout << z+e-9 << "/4" << std::endl;
        }
    }
}