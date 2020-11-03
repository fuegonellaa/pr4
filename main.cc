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
#include <fstream>
#include <string> 
#include "fibonacci_words.h"

int main(int argc, char* argv[]) {
  if(argc == 1) {
    std::cout << "The right way of executing this code is ./fibonacci_words input.txt output.txt. Check ./fibonacci_words -h or --help for more information" << std::endl;
    return 1;
  } else if (argc == 2) {
    std::string help = "--help";
    std::string help2 = "-h";
    std::cout << "The right way of executing this code is ./fibonacci_words input.txt output.txt" << std::endl;
    if (help.compare(argv[1]) == 0 || help2.compare(argv[1]) == 0) {
      std::cout << "This program reads words from a file. Then it checks if the words are in a Fibonacci sequence with the first two written in the file" << std::endl; //meter una explicacion
      std::cout << "Careful! Words must be written in different lines, else they'll be considered one word." << std::endl;
      return 0;
    }
    return 1;
  }

  std::ifstream input;
  input.open(argv[1]);
  std::ofstream output;
  output.open(argv[2]);
  std::string Word1;
  std::string Word2;
  std::getline(input, Word1);
  std::getline(input, Word2);

  Fibonacci Seq(Word1, Word2);
  
  output << Word1 << " is the word number " << Seq.GetPos(Word1) << std::endl;
  output << Word2 << " is the word number " << Seq.GetPos(Word2) << std::endl;

  std::string Word;
  while(std::getline(input, Word)) {
    if(Seq.InSequence(Word) && Seq.GetPos(Word) != -1) {
      output << Word << " is the word number " << Seq.GetPos(Word) << std::endl;
    } else {
      output << Word << " is not a Fibonacci word " << std::endl;
    }
  }
  input.close();
  output.close();
  return 0;
}