#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(SORT)
{
  RUN_TEST_CASE(SORT, TestSortDescending);
  RUN_TEST_CASE(SORT, TestSortArrayNegative);
  RUN_TEST_CASE(SORT, TestSortArrayRepeted);
  RUN_TEST_CASE(SORT, TestSortPositiveNegative);
}
