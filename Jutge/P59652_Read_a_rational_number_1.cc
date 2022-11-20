/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P59652_Read_a_rational_number_1.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 20/11/2022
  * @brief Es un programa que lee un número racional dado en la forma numerador/denominador, y almacena estos dos valores en num y den.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59652_en
  */

#include <iostream>

int mcm (int a,int b) {
    if (b==0) {
        return a;
    }
    return mcm(b,a%b);
}


void read_rational(int& num, int& den) {
    std::string s;
    std::cin >> s;
    num = 0; 
    den = 0;
    bool denominador = false;
    for (int i = 0; i<s.size(); i++) {
        if (s[i]=='/') {
            denominador = true;
        }
        else {
            if (denominador) {
                den = den*10 + (int)(s[i]-'0');
            }
            else {
                num = num*10 + (int)(s[i]-'0');
            }
        }
    }
    int gcd = mcm(num,den);
    num /= gcd;
    den /= gcd;
}

int main () {
	int num, den;
    read_rational(num, den);
    std::cout << num << " " << den << std::endl;
}