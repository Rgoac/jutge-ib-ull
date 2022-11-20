/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P22654_Time_decomposition_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que, dada una cantidad de segundos, calcula
           cuántas horas h, minutos m y segundos s representa.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P22654_en
  */

#include <iostream>

void decompose(int n, int& h, int& m, int& s) {
    s = n%60;
	m = n/60;
	h = m/60;
	m = m%60;
}

int main () {
	int n,s,m,h;
    while (std::cin >> n) {
        decompose(n,h,m,s);
        std::cout << h << " " << m << " " << s << std::endl;
    }
}