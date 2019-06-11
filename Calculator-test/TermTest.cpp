#include "pch.h"
#include "../Calculator/Term.h"
#include "../Calculator/InvalidTermException.h"

TEST(Term, Exists) {
  Term term;
  ASSERT_THROW(term.get(), InvalidTermException);

  Term term2("2");
  ASSERT_NO_THROW(term2.get());

  Term term3 = "123";
  ASSERT_NO_THROW(term3.get());
}
TEST(Term, IsTwo) {
  Term term = "2";
  ASSERT_EQ(term.get(), 2);
}

TEST(Term, NonNumericException) {
  Term term = "abc";
  ASSERT_THROW(term.get(), InvalidTermException);
}

TEST(Term, HugeNumber) {
  Term term = "21234123412341";
  ASSERT_THROW(term.get(), InvalidTermException);
}

TEST(Term, AddFive) {
  Term term = "10";
  ASSERT_EQ(term.add(5), 15);
}

TEST(Term, AdditionWithInvalidTerm) {
  Term term = "abcd";
  ASSERT_THROW(term.add(5), InvalidTermException);
}

TEST(Term, SetTerm) {
  Term term = "21";
  ASSERT_EQ(term.get(), 21);

  term.set("25");
  ASSERT_EQ(term.get(), 25);

  term = "5";
  ASSERT_EQ(term.get(), 5);
}
