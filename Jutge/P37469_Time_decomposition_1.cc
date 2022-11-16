/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P37469_Time_decomposition_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/11/2022
  * @brief Es un programa que, dado un número de segundos n, imprime el número de horas, minutos y segundos representados por n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37469_en
  */

#include <iostream>

int main () {
	int decomposicion;
	std::cin >> decomposicion;
	int horas, minutos, segundos;
	    segundos = decomposicion%60;
	    minutos = decomposicion/60;
	    horas = minutos/60;
	    minutos = minutos%60;
	std::cout << horas << " " << minutos << " " << segundos << std::endl;
}