/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Computabilidad y Algoritmia
 * 2º de Carrera
 * Práctica 4. Palabras de Fibonacci
 * Referencia:
 * https://github.com/fsande/CyA-P04-FibonacciWords/blob/master/FibonacciWords.md
 * \author $Author: Antonella Sofía García Álvarez $
 * Contact: alu0101227610@ull.edu.es */

#include <iostream>

class Fibonacci {

  Fibonacci* Word1_;
  Fibonacci* Word2_;
  int SeqPos_;
  std::string Word_;

  public:

  Fibonacci();
  Fibonacci(std::string);
  Fibonacci(Fibonacci&, Fibonacci&);

  ~Fibonacci();

  void SetPos(int);
  void SetWord(std::string);

  int GetPos();
  Fibonacci* GetFibonacci(int);
  std::string GetWord();
};
