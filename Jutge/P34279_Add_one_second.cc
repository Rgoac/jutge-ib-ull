/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P34279_Add_one_second.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/11/2022
  * @brief Es un programa que suma un segundo al tiempo de un reloj, dadas sus horas, minutos y segundos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279_en
  */
 
#include <iostream>
#include <iomanip>

int main () {
	int h,m,s;
	std::cin >> h >> m >> s;
	s++;
	if (s==60) {
		m++;
		s = 0;
	}
	if (m==60) {
		h++;
		m = 0;
	}
	if (h==24) h = 0;
	std::cout << std::setfill('0') << std::setw(2) << h << ':' 
		 << std::setfill('0') << std::setw(2) << m << ':' 
		 << std::setfill('0') << std::setw(2) << s << std::endl;
}