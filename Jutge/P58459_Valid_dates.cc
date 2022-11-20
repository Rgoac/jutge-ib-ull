/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P58459_Valid_dates.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que dice si la fecha dada es válida o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58459_en
  */

#include <iostream>

bool is_leap_year (int n) {
    if (n%100==0) {
        if (n%400==0) {
            return true;
        }
        else {
            return false;
        }
    } else if (n%4==0) {
        return true;
    }
    else {
        return false;
    }
}

bool is_valid_date(int d, int m, int a) {
    if (d < 1 or d > 31) {
        return false;
    }
    if (m < 1 or m > 12) {
        return false;
    }
    if (m==2) {
        if (d > 29) {
            return false;
        }
        if (d == 29 and !is_leap_year(a)) {
            return false;
        }
        return true;
    }
    return !(d == 31 && (m==4 or m==6 or m==9 or m==11)); 
}


int main () {
	int d,m,a;
    while (std::cin >> d) {
        std::cin >> m >> a;
        if (is_valid_date(d,m,a)) {
            std::cout << "true" << std::endl;
        }
        else {
            std::cout << "false" << std::endl;
        }
    }
}