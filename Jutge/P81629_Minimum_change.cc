/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P81629_Minimum_change.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que, dada una cantidad de euros y céntimos, calcula el número mínimo de billetes y monedas necesarios para obtener esa cantidad.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P81629_en
  */

#include <iostream>

int main () {
    int euros, centimos;
    std::cin >> euros >> centimos;
    int monedas[] = {1, 2, 5, 10, 20, 50};
    int billetes[] = {5, 10, 20, 50, 100, 200, 500};
    int cont = 7;
    int cont2 = 0;
    while (cont--) {
        std::cout << "Banknotes of " << billetes[cont] << " euros: " << euros/billetes[cont] << std::endl;
        if (euros >= billetes[cont]) euros%=billetes[cont];
    }
    std::cout << "Coins of " << 2 << " euros: " << euros/2 << std::endl;
    if (euros >= 2) euros %= 2;
    std::cout << "Coins of " << 1 << " euro: " << euros << std::endl;
    cont = 6;
    while (cont--) {
        if (cont != 0) {
            std::cout << "Coins of " << monedas[cont] << " cents: " << centimos/monedas[cont] << std::endl;
        }
        else {
            std::cout << "Coins of " << monedas[cont] << " cent: " << centimos/monedas[cont] << std::endl;
        }
        if (centimos >= monedas[cont]) centimos%=monedas[cont];
    }
}