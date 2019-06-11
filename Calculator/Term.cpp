#include "Term.h"
#include "InvalidTermException.h"

Term::Term(std::string term)
  : valid(true)
{
  try {
    termAsInt = std::stoi(term);
  } catch (...) {
    valid = false;
  }
}

bool Term::isValid() const {
  return valid;
}

int Term::getAsInt() const {
  if (isValid()) {
    return termAsInt;
  } else {
    throw InvalidTermException();
  }
}

int Term::add(const int number) const {
  return getAsInt() + number;
}
