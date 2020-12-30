# Random_Numbers
Algoritmo en C++ que genera números aleatorios.

Hace uso de las librerias random, chrono y functional para la generación de los número aleatorios.

El resultado son verdaderos números aleatorios, ya que otros algoritmos para generar números aleatorios, son los mismos en cada corrida del programa.

El programa genera enteros aleatorios del 1 al 999, para cambiar el rango solo es necesario modificar la línea 11 e indicar el ranago.

Ej: uniform_int_distribution<int> distribution(1, 150000); -> Genera números del 1 al 150000
