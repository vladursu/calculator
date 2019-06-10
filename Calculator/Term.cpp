#include "Term.h"
#include "NonNumericTermException.h"

#include <exception>


Term::Term(std::string term) 
  : termAsString(term)
{}

int Term::getAsInt() const {
  int number;
  try {
    number = std::stoi(termAsString);
  } catch (std::exception e) {
    throw NonNumericTermException(e);
  }
  return number;
}
