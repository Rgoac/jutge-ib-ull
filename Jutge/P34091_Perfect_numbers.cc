/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P34091_Perfect_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que dice si un numero natural es perfecto.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34091_en
  */

#include <iostream>

bool is_perfect(int n) {
    switch (n) {
        case 6 : return 1;
        case 28 : return 1;
        case 496 : return 1;
        case 8128 : return 1;
        case  33550336 : return 1;
        default : return 0;
    }
}

int main () {
	int n;
    while (std::cin >> n) {
        if (is_perfect(n)) {
            std::cout << "true" << std::endl;
        }
        else {
            std::cout << "false" << std::endl;
        }
    }
}

/**
#include <iostream>
#include <cmath>

bool is_perfect(int n) {
	if (n == 1) {
        return false;
        }
	int i {2};
	int suma {1};
	while (i < sqrt(n)) {
		if (suma > n) {
            return false;
            }
		if (n%i == 0) {
			suma = suma + i + n/i;
		}
		i = i+1;
	}
	if (n == suma) {
        return true;
        }
	else {
        return false;
        }
}

int main() {
	int n;
	std::cin >> n;
	std::cout << is_perfect(n) << std::endl;
}
*/