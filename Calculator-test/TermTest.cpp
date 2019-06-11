#include "pch.h"
#include "../Calculator/Term.h"
#include "../Calculator/InvalidTermException.h"

TEST(Term, IsTwo) {
  Term term("2");
  ASSERT_TRUE(term.isValid());
  ASSERT_EQ(term.getAsInt(), 2);
}

TEST(Term, NonNumericException) {
  Term term("abc");
  ASSERT_FALSE(term.isValid());
  ASSERT_THROW(term.getAsInt(), InvalidTermException);
}

TEST(Term, HugeNumber) {
  Term term("21234123412341");
  ASSERT_FALSE(term.isValid());
  ASSERT_THROW(term.getAsInt(), InvalidTermException);
}

TEST(Term, AddFive) {
  Term term("10");
  ASSERT_TRUE(term.isValid());
  ASSERT_EQ(term.add(5), 15);
}

TEST(Term, AdditionWithInvalidTerm) {
  Term term("abcd");
  ASSERT_FALSE(term.isValid());
  ASSERT_THROW(term.add(5), InvalidTermException);
}