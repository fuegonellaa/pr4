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

#include "fibonacci_words_exercise.h"

Fibonacci::Fibonacci(std::string Word1, std::string Word2) {
  Word1_ = Word1;
  Word2_ = Word2;
  Sequence_.push_back(Word1);
  Sequence_.push_back(Word2);
  Sequence_.push_back(Word1 + Word2);
}

bool Fibonacci::InSequence(std::string &Word) {                    
  size_t Pos = Word.find_last_of(Sequence_[2]);
  size_t WordSize = Word.length();
  if((Pos != WordSize - 1) || (Pos == -1)) {
    return false;
  } else {
    if(WordSize < Sequence_[Sequence_.size() - 1].length()) {
      return LittlestWord(Word);
    } else {
      return GreaterWord(Word);
    }
  }
}

void Fibonacci::AddSequence(int &TopLimit){
  Sequence_.push_back(Sequence_[Sequence_.size() - 2] + Sequence_[Sequence_.size() - 1]); //Añade una palabra nueva
  if(Sequence_[Sequence_.size() - 2].length() < TopLimit){
    AddSequence(TopLimit);
  }
}

int Fibonacci::GetPos(std::string &Word) {
  for(int i = 0;i < Sequence_.size(); i++) {
    if(Word == Sequence_[i]) {
      return i + 1;
    }
  }
  return -1;
}

bool Fibonacci::GreaterWord(std::string &Word) {
  Sequence_.push_back(Sequence_[Sequence_.size() - 2] + Sequence_[Sequence_.size() - 1]);
  if(Word.length() > Sequence_[Sequence_.size() - 1].length()) {
    return GreaterWord(Word);
  } else {
    if(Word == Sequence_[Sequence_.size() - 1]) {
      return true;
    } else {
      return false;
    }
  }
}

bool Fibonacci::LittlestWord(std::string &Word) {
  for(int i = 0;i < Sequence_.size(); i++) {
    if(Word == Sequence_[i]) {
      return true;
    }
  }
  return false;
}

void Fibonacci::WriteSeq(std::ostream& os, int upl, int lowl){
  for (int i = 0 ; i < Sequence_.size() ; i++ ) {
    if (Sequence_[i].length() >= lowl && Sequence_[i].length() <= upl){
      os << Sequence_[i].length() << " - " << Sequence_[i] << std::endl;
    }
  }
}