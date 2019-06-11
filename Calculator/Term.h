#pragma once
#include <string>

class Term {
public:
  Term();
  Term(std::string term);
  Term(const char* term);
  ~Term() = default;

  bool isValid() const;

  int get() const;
  void set(std::string term);

  int add(const int number) const;

private:
  int term;
  bool valid;
};

