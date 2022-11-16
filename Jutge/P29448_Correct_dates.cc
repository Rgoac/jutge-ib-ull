/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P29448_Correct_dates.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que lee varias fechas, y para cada una dice si es correcta o no según el calendario gregoriano.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29448_en
  */

#include <iostream>

bool añobisiesto (int fecha) {
    if (fecha%100==0) {
        if (fecha%400==0) return 1;
        else return 0;
    }
    else if (fecha%4==0) return 1;
    else return 0;
}

bool añonormal (int dia, int mes, int año) {
    if (dia < 1 or dia > 31) {
        return false;
    }
    if (mes < 1 or mes > 12) {
        return false;
    }
    if (mes==2) {
        if (dia > 29) {
            return false;
        }
        if (dia == 29 && !añobisiesto(año)) {
            return false;
        }
        return true;
    }
    return !(dia == 31 && (mes==4 or mes==6 or mes==9 or mes==11)); 
}

int main () {
	int dia,mes,año;
    while (std::cin >> dia) {
        std::cin >> mes >> año;
        if (añonormal(dia,mes,año)) {
            std::cout << "Correct Date" << std::endl;
        }
        else {
            std::cout << "Incorrect Date" << std::endl;
        }
    }
}