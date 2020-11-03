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
 * Contact: alu0101227610@ull.edu.es 
 * */

#pragma once
#include <iostream>
#include <vector>

class Fibonacci {
  std::vector<std::string> Sequence_;
  std::string Word1_;
  std::string Word2_;
  public:
  /**
   * The main constructor of the class. It takes two strings
   * and it starts a Fibonacci sequence.
   * \brief Main constructor
   * \param Word1 Refers to the first word of the sequence.
   * \param Word2 Refers to the second word of the sequence.
   * */
  Fibonacci(std::string, std::string);

  /**
   * 
   * 
   * \brief Main constructor
   * \param Word1 Refers to the first word of the sequence.
   * \param Word2 Refers to the second word of the sequence.
   * */
  bool InSequence(std::string&);
  ///Obtiene la posición de la palabra
  int GetPos(std::string&);

  private:

  ///La palabra a buscar es mayor que las que hay en la secuencia
  bool GreaterWord(std::string&);
  ///La palabra a buscar puede que ya esté en la secuencia
  bool LittlestWord(std::string&);

}; ///End of class
