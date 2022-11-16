/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P61061_Product_of_digits.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 12/11/2022
  * @brief Es un programa que lee varios números, y para cada uno imprime el
           producto de sus dígitos, y el producto de los dígitos del último 
           producto, etcétera, hasta que el producto resultante tenga un solo dígito.
  * @see https://jutge.org/problems/P61061_en
  */

#include <iostream>

int producto_digitos(int numero) {
    if (numero==0) {
        return 0;
    }
    else {
        int producto=1;
        while (numero!=0) {
                producto=producto*(numero%10);
                numero=numero/10;
            }
            return producto;
    }
}

int main() {
    int numero;
    while (std::cin >> numero) {
        int numero_padre = numero;
        std::cout << "The product of the digits of " << numero_padre << " is " << producto_digitos(numero) << "." << std::endl;
        while (producto_digitos(numero)/10!=0) {
            numero = producto_digitos(numero);
            std::cout << "The product of the digits of " << numero << " is " << producto_digitos(numero) << "." << std::endl;
        }
        std::cout << "----------" << std::endl;
    }
}