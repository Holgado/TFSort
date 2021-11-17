#include "unity.h"
#include "sort.h"
#include "unity_fixture.h"


// SELECTION  0
// INSERTION  1
// SHELL      2
// QUICK      3
// HEAP       4
// MERGE      5
// UNDEFINED -1


TEST_GROUP(SORT);

TEST_SETUP(SORT)
{
}

TEST_TEAR_DOWN(SORT)
{
}
// Array menor que 6, Inciar por letra, não pode ter caracteres especiais


/********* SELECTION **********/

TEST(SORT, TestSortDescending)
{
  // All of these should pass
    int expected[] = {1,2,3,4,5,6,7,8};
     
    for (int i = 0; i < 6; i++) {
        int actual[] = {8,7,6,5,4,3,2,1};
        sort_array(actual, 8, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
        
    }
}

TEST(SORT, TestSortArrayNegative)
{
  // This test will pass
  int expected[] = {-8,-7,-6,-5,-4,-3,-2,-1};
    
    for (int i = 0; i < 6; i++) {
        int actual[] = {-1,-5,-2,-4,-3,-6,-7,-8};
        sort_array(actual, 8, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
        
    }
}
TEST(SORT, TestSortArrayRepeted){
  // This test will pass
  int expected[] = {1,5,5,5,5,12,22,40};
    
    for (int i = 0; i < 6; i++) {
        int actual[] = {40,5,5,5,5,22,1,12};
        sort_array(actual, 8, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
    }
}
TEST(SORT, TestSortPositiveNegative){
    // This test will pass
    int expected[] = {-3,-2,-1,0,1,2,3,4};
    
    for (int i = 0; i < 6; i++) {
        int actual[] = {0,1,3,2,4,-3,-1,-2};
        sort_array(actual, 8, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
    }
}