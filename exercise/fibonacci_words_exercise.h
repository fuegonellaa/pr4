/*
  Universidad de La Laguna
  Escuela Superior de Ingeniería y Tecnología
  Grado en Ingeniería Informática
  Computabilidad y Algoritmia
  2º de Carrera
  Práctica 4. Palabras de Fibonacci
  Referencia:
  https://github.com/fsande/CyA-P04-FibonacciWords/blob/master/FibonacciWords.md
  \author $Author: Antonella Sofía García Álvarez $
  Contact: alu0101227610@ull.edu.es */

#pragma once
#include <iostream>
#include <vector>
#include <string>

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
   * It's here to tell us if the word is in the Fibonacci sequence
   * \brief Checks if the word is in sequence
   * \param Word string to check
   * */
  bool InSequence(std::string&);
  //modificacion
  void AddSequence(int&);
  //modificacion
  void WriteSeq(std::ostream&,int,int);

  /**
   * Gives us the position of the word in sequence
   * \brief Gets the position
   * \param Word string to get the position 
   * \return Position in the sequence
   * */
  int GetPos(std::string&);

  private:

  bool GreaterWord(std::string&);
  bool LittlestWord(std::string&);

};