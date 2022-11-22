# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica 2022-2023
#
# @file P92613_Rounding.py
# @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
# @date 05/11/2022
# @brief Es un programa que lee un número real x≥0 e imprime [x] (el truncamiento de x), [x] (el exceso de x) y el redondeo de x.
# @see https://jutge.org/problems/P92613_en

#!/usr/bin/python

import math

n = input()
print int(math.floor(n)), int(math.ceil(n)), int(round(n))