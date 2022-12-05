/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P92613_Rounding.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 05/11/2022
  * @brief Es un programa que lee un número real x≥0 e imprime [x] (el truncamiento de x), [x] (el exceso de x) y el redondeo de x.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P92613_en
  */

#include <iostream>
#include <cmath>

int main() {
	double numero = 0;
	int inferior, superior, redondeo = 0;
	std::cin >> numero;
	
	superior = ceil(numero);
	inferior = floor(numero);
  redondeo = round(numero);
	
	std::cout << inferior << " " << superior << " " << redondeo << std::endl;	
}
