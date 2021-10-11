#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestSortDescending)
{
  // All of these should pass
  int expected[] = {1,2,3,4,5,6,7,8};
  int actual[] = {8,7,6,5,4,3,2,1};
  
  bubble_sort(actual, 8);

  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
}

TEST(Sort, TestSortArrayNegative)
{
  // This test will pass
  int expected[] = {-8,-7,-6,-5,-4,-3,-2,-1};
  int actual[] = {-1,-5,-2,-4,-3,-6,-7,-8};
    
  bubble_sort(actual, 8);
  
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
}
TEST(Sort, TestSortArrayRepeted){
  // This test will pass
  int expected[] = {1,5,5,5,5,12,22,40};
  int actual[] = {40,5,5,5,5,22,1,12};
    
  bubble_sort(actual, 8);

  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
}
TEST(Sort, TestSortPositiveNegative){
  // This test will pass
  int expected[] = {-3,-2,-1,0,1,2,3,4};
  int actual[] = {0,1,3,2,4,-3,-1,-2};
    
  bubble_sort(actual, 8);

  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
}