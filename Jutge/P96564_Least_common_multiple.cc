/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P96564_Least_common_multiple.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 19/11/2022
  * @brief Es un programa tal que, dados n números naturales estrictamente 
           positivos x¹ … xn, imprime su mínimo común múltiplo mayor que cero.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96564_en
  */

#include <iostream>

int lcm (int a,int b) {
    if (b==0) {
        return a;
    }
    return lcm(b,a%b);
}

int main () {
    long long numero;
    while (std::cin >> numero) {
        long long a, b, mcm;
        if (numero == 1) {
            std::cin >> a;
            std::cout << a << std::endl;
            } 
        else if (numero != 0 ) {
            std::cin >> a >> b;
            mcm = a*b/lcm(a,b);
            for (int i = 2; i<numero; i++) {
                std::cin >> a;
                mcm *= a/lcm(mcm,a);
            }
            std::cout << mcm << std::endl;
        }
    }
}