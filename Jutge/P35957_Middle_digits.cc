/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P35957_Middle_digits.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/12/2022
  * @brief Es un programa para decidir quien gana una partida entre Anne y Bernard.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P35957_en
  */

#include <iostream>

bool par (int numero) {
  int digito = 1;
  int division = 10;
  while (division <= numero) {
    division *= 10;
    ++digito;
  }
  if (digito%2 == 0) {
    return true;
  }
  return false;
}

int digito_medio (int numero) {
  int producto = 1;
  while (producto*producto*10 < numero) {
    producto *= 10;
  }
  return (numero/producto)%10;
}



int main() {
  int turnos, numero;
  std::cin >> turnos;
  bool perder = false;
  char ganador;
  int secuencia;
  std::cin >> secuencia;
  if (par(secuencia)) {
    perder = true;
  }
  int digito_secuencia = digito_medio(secuencia);
  int digito = 1;
  while (!perder && digito < 2*turnos) {
    std::cin >> numero;
    if (par(numero)) {
      perder = true;
    }
    else {
      int medio = digito_medio(numero);
      if (digito_secuencia != medio) {
        perder = true;
      }
    }
    ++digito;
  }
  if (perder) {
    if (digito%2 == 0) {
      ganador = 'A';
    }
    else {
      ganador = 'B';
    }
  }
  else ganador = '=';
  std::cout << ganador << std::endl;
}
