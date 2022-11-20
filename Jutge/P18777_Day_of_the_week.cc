/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P18777_Day_of_the_week.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que, dada una fecha válida, devuelve su día de la semana.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P18777_en
  */

#include <iostream>
#include <cmath>

std::string day_of_the_week(int d, int m, int a) {
    m -= 2;
    if (m<=0) {
        m+=12;
        a--;
    }
    int c = a/100, y = a-c*100;
    int f = floor(2.6*m - 0.2) + d + y + floor(y/4) + floor(c/4) - 2*c;
    f %= 7;
    if (f<0) {
        f += 7;
    }
    switch (f) {
        case 0: return "Sunday";
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
    }
}

int main () {
    int d,m,a;
    while (std::cin >> d) {
        std::cin >> m >> a;
        std::cout << day_of_the_week(d,m,a) << std::endl;
    }
    return 0;
}