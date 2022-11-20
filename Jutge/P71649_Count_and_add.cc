/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P71649_Count_and_add.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que lee una secuencia de números enteros hasta su final,
           y almacena en num cuantos números tiene, y en sum la suma de esos números.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71649_en
  */

#include <iostream>

void count_and_add(int& num, int& sum) {
    int n;
    num=0;
    sum=0;
    while (std::cin >> n) {
        num++;
        sum += n;
    }
}

int main () {
	int num, sum;
    count_and_add(num,sum);
    std::cout << num << " " << sum << std::endl;
}