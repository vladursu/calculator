#pragma once

#include <exception>

class NonNumericTermException : public std::exception {
public:
  NonNumericTermException(std::exception e)
    : std::exception(e)
  {}
};