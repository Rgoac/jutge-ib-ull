/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P95401_Function_for_leap_years.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que dice si el año dado es un año bisiesto o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P95401_en
  */

#include <iostream>

bool is_leap_year(int year) {
    if (year%100 == 0) {
            if ((year/100)%4 == 0) {
                return true;
            }
            return false;
	}
	else {
		if (year%4 == 0) {
            return true;
        }
		return false;
	}
}

int main() {
    int year;
    std::cin >> year;
    std::cout << is_leap_year(year) << std::endl;
}