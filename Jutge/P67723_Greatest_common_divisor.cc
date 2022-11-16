/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P67723_Greatest_common_divisor.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que calcula el máximo común divisor de dos números.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P67723_en
  */

#include <iostream>

int maximocomundivisor (int numero1,int numero2) {
    if (numero2==0) {
        return numero1;
    }
    return maximocomundivisor(numero2,numero1%numero2);
}

int main () {
	int numero1,numero2;
    std::cin >> numero1 >> numero2;
    std::cout << "The gcd of " << numero1 << " and " << numero2 << " is " << maximocomundivisor(numero1,numero2)  << "." << std::endl;
}