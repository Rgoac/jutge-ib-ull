/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P93157_Read_a_rational_number_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que lee un número racional dado en la forma numerador/denominador, y almacena estos dos valores en num y den.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P93157_en
  */

#include <iostream>
#include <sstream>

int mcm (int a,int b) {
    if (b==0) {
        return a;
    }
    return mcm(b,a%b);
}


bool read_rational(int& num, int& den) {
    std::string s;
    std::cin >> s;
    bool t = false;
    for (int i = 0; i<s.size(); i++) {
        if (s[i]=='/') {
            s[i] = ' ';
            t = true;
        } else if (!(s[i]>='0' && s[i]<='9')) {
            return false;
        }
    }
    if (!t) {
        return false;
    }
    std::stringstream ss;
    ss << s;
    ss >> num >> den;
    if (den == 0) {
        return false;
    }
    int gcd = mcm(num,den);
    num /= gcd;
    den /= gcd;
    return true;
}

int main () {
    int num, den; 
    while (read_rational(num, den)) {
        std::cout << num << " " << den << std::endl;
    }
}