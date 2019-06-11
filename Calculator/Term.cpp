#include "Term.h"
#include "InvalidTermException.h"

Term::Term()
  : valid(false),
    term(0)
{}

Term::Term(std::string term)
  : valid(true)
{
  set(term);
}

Term::Term(const char* term) 
  : valid(true) 
{
  set(term);
}

bool Term::isValid() const {
  return valid;
}

int Term::get() const {
  if (isValid()) {
    return term;
  } else {
    throw InvalidTermException();
  }
}

void Term::set(std::string term) {
  try {
    this->term = std::stoi(term);
  } catch (...) {
    valid = false;
  }
}

int Term::add(const int number) const {
  return get() + number;
}
