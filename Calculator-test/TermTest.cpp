#include "pch.h"
#include "../Calculator/Term.h"
#include "../Calculator/NonNumericTermException.h"

TEST(Term, IsTwo) {
  Term term("2");
  ASSERT_EQ(term.getAsInt(), 2);
}

TEST(Term, NonNumericException) {
  Term term("abc");
  ASSERT_THROW(term.getAsInt(), NonNumericTermException);
}