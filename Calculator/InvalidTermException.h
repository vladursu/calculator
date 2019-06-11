#pragma once

#include <exception>

class InvalidTermException : public std::exception {
public:
  InvalidTermException() = default;
  InvalidTermException(std::exception e)
    : std::exception(e)
  {}
};