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
  Contact: alu0101227610@ull.edu.es 
  */

#include <iostream>
#include <fstream>
#include <string> 
#include <cstdlib>
#include "fibonacci_words_exercise.h"

int main(int argc, char* argv[]) {
  if(argc == 1) {
    std::cout << "This program prints all the Fibonacci words with length between two limits" << std::endl;
    std::cout << "It requires two numeric parameters indicating the length limit for the words and a third parameter indicating the output file" << std::endl;
    std::cout << "Usage: ./fibonacci_words_exercise lower_limit upper_limit output.txt" << std::endl;
    return 1;
  } else if (argc == 2 || argc == 3) {
    return 1;
  }

  std::ofstream output;
  output.open(argv[3]);
  std::string Word1 = "a";
  std::string Word2 = "b";

  Fibonacci Seq(Word1, Word2);
  int lower_limit = std::atoi(argv[1]);
  int upper_limit = std::atoi(argv[2]);
  if (lower_limit == 1){
    output << Seq.GetPos(Word1) << "" << std::endl;
    output << Seq.GetPos(Word2) << "" << std::endl;
  }

  Seq.AddSequence(upper_limit);

  Seq.WriteSeq(output, upper_limit, lower_limit);
  output.close();


  return 0;
}