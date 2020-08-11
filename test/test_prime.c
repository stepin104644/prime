
#include "unity.h"
#include "prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void)
{
   TEST_ASSERT_EQUAL(1, prime(7));
   TEST_ASSERT_EQUAL(1, prime(11));
   TEST_ASSERT_EQUAL(1, prime(19));
   TEST_ASSERT_EQUAL(1, prime(2));
}
void test_not_prime(void)
{
  TEST_ASSERT_EQUAL(0, prime(10));
  TEST_ASSERT_EQUAL(0, prime(25));
  TEST_ASSERT_EQUAL(0, prime(34));
  TEST_ASSERT_EQUAL(0, prime(100));
}
void test_neither_prime_nor_composite(void)
{
  TEST_ASSERT_EQUAL(-1, prime(0));
  TEST_ASSERT_EQUAL(-1, prime(1));
  TEST_ASSERT_EQUAL(-1, prime(-7));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime);
  RUN_TEST(test_not_prime);
  RUN_TEST(test_neither_prime_nor_composite);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
