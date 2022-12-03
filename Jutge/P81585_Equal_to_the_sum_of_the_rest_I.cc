/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P81585_Equal_to_the_sum_of_the_rest_I.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 03/12/2022
  * @brief Es un programa que, dada una sucesión de números naturales, dice si 
           existe algún número igual a la suma de los demás.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P81585_en
  */

#include <iostream>

int main() {
	int numero_de_valores;
	int secuencia;
	int maximo;
	while (std::cin >> numero_de_valores) {
		int suma = 0;
    for (int i = 0; i<numero_de_valores; i++) {
		  std::cin >> secuencia;
		  suma = suma + secuencia;
		  if (i != 0) {
			  if (maximo < secuencia) maximo = secuencia;
		  }
		  else maximo = secuencia;
	  }
    if (suma - maximo == maximo) {
      std::cout << "YES" << std::endl;
    }
    else {
      std::cout << "NO" << std::endl;
    }
  }
}