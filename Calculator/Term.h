#pragma once
#include <string>

class Term {
public:
  explicit Term(std::string term);
  ~Term() = default;

  int getAsInt() const;

private:
  std::string termAsString;
};

