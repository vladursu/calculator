#pragma once
#include <string>

class Term {
public:
  explicit Term(std::string term);
  ~Term() = default;

  bool isValid() const;

  int getAsInt() const;

  int add(const int number) const;

private:
  int termAsInt;
  bool valid;
};

