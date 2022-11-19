/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P58653_Classification_of_characters_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 19/11/2022
  * @brief Es un programa que lee un carácter y dice si es una letra, si es una
           vocal, si es una consonante, si es una letra mayúscula, si es una letra minúscula y si es un dígito.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58653_en
  */

#include <iostream>

void print_line(char c, std::string s, bool b) {
    std::cout << s << "('" << c << "') = "; 
    if (b) {
        std::cout << "true" << std::endl;
    } 
    else {
        std::cout << "false" << std::endl;
    }
}

int main () {
	char c,C;
    std::cin >> c;
    C = c;
    bool mayuscula = c >= 'A' && c <= 'Z';
    if (mayuscula) c = c -'A'+'a';
    bool letra = (c >= 'a' && c <= 'z');
    print_line(C, "letter", letra);
    if (c=='a' or c=='e' or c=='i' or c=='o' or c=='u') {
        print_line(C,"vowel",true);
        print_line(C,"consonant",false);
    } 
    else if (letra) {
        print_line(C,"vowel",false);
        print_line(C,"consonant",true);
    } 
    else {
        print_line(C,"vowel",false);
        print_line(C,"consonant",false);
    }
    if (mayuscula) {
        print_line(C,"uppercase",true);
        print_line(C,"lowercase",false);
    } 
    else if (letra) {
        print_line(C,"uppercase",false);
        print_line(C,"lowercase",true);
    } 
    else {
        print_line(C,"uppercase",false);
        print_line(C,"lowercase",false);
    }
    print_line (C,"digit", c >= '0' && c <= '9');
}