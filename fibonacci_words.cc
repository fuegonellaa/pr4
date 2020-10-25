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

#include "fibonacci_words.h"

Fibonacci::Fibonacci() {
  Word1_ = nullptr;
  Word2_ = nullptr;
  SeqPos_ = 0;
  Word_ = "";
}

Fibonacci::Fibonacci(std::string Value) {
  Word1_ = nullptr;
  Word1_ = nullptr;
  SeqPos_ = 0;
  Word_ = Value;
}

Fibonacci::Fibonacci(Fibonacci& Word1, Fibonacci& Word2) {
  Word1_ = &Word1;
  Word2_ = &Word2;
  SeqPos_ = Word2_->GetPos() + 1;
  Word_ = Word1_->GetWord() + Word2_->GetWord();
}

Fibonacci::~Fibonacci() {
  Word1_ = nullptr;
  Word2_ = nullptr;
  SeqPos_ = 0;
  Word_ = "";
}

void Fibonacci::SetPos(int Pos) {
  SeqPos_ = Pos;
}

void Fibonacci::SetWord(std::string Word) {
  Word_ = Word;
}

int Fibonacci::GetPos(){
  return SeqPos_;
}

Fibonacci* Fibonacci::GetFibonacci(int WordNumber) {
  switch (WordNumber) {
    case 1:
      return Word1_;
      break;
    case 2:
      return Word2_;
      break;
    default:
      return nullptr;
  }
}

std::string Fibonacci::GetWord() {
  return Word_;
}