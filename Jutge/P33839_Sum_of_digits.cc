/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file .cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 08/11/2022
  * @brief Es un programa que lee varios números e imprime la suma de los dígitos de cada uno.
  * @see https://jutge.org/problems/P33839_en
  */

#include <iostream>

int main() {
    int digitos;
    while (std::cin >> digitos) {
        int numero=digitos;
        int suma=0;
        while (digitos>0) {
            suma = suma + digitos%10;
            digitos = digitos/10;
        }
        std::cout << "The sum of the digits of " << numero << " is " << suma << "." << std::endl;
    }
}