/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P71310_Scalar_product.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 21/11/2022
  * @brief Es un programa que devuelve el producto escalar de u y v.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71310_en
  */

#include <iostream>
#include <vector>

double scalar_product (const std::vector<double>& u, const std::vector<double>& v) {
    int n = v.size();
    double producto = 0;
    for (int i = 0; i<n; i++) {
        producto = producto + v[i]*u[i];
    }
    return producto;
}
int main() {
    int n;
    while (std::cin >> n) {
        std::vector <double> u(n);
        std::vector <double> v(n);
        for (int i = 0; i<n; ++i) {
            std::cin >> u[i];
        }
        for (int i = 0; i<n; ++i) {
            std::cin >> v[i];
        }
        std::cout << scalar_product(u, v) << std::endl;
    }
}