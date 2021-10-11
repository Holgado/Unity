#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestSortDescending);
  RUN_TEST_CASE(Sort, TestSortArrayNegative);
  RUN_TEST_CASE(Sort, TestSortArrayRepeted);
  RUN_TEST_CASE(Sort, TestSortPositiveNegative);
}
