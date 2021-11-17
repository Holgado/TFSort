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

TEST(SORT, TestArraySorted)
{
  // All of these should pass
    int expected[] = {1,2,3,4,5,6,7,8};
     
    for (int i = 0; i < 6; i++) {
        int actual[] = {1,2,3,4,5,6,7,8};

        sort_array(actual, 8, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
    }
}

TEST(SORT, TestArrayNull)
{
  // All of these should pass
    //int expected[] = NULL;
     
    for (int i = 0; i < 6; i++) {        
        TEST_ASSERT_NULL(sort_array(NULL, 8, i));
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

TEST(SORT, TestMaxValues){
    // This test will pass
    int expected[] = {-2147483648,-2,-1,0,1,2,3,2147483647};
    
    for (int i = 0; i < 6; i++) {
        int actual[] = {0,1,3,2,2147483647,-2147483648,-1,-2};

        sort_array(actual, 8, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 8);
    }
}

TEST(SORT, TestOddSize){
    // This test will pass
    int expected[] = {2,3,5,7,9};
    
    for (int i = 0; i < 6; i++) {
        int actual[] = {9,7,5,3,2};

        sort_array(actual, 5, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 5);
    }
}

TEST(SORT, TestSizeSmallerThanArray){
    // This test will pass
    int expected[] = {1,2,3,4,5,6,0,0,0};
    
    for (int i = 0; i < 6; i++) {
        int actual[] = {6,5,4,3,2,1,0,0,0};

        sort_array(actual, 6, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 6);
    }
}

TEST(SORT, TestSizeInvalid){
    // This test will pass
    int expected[] = {1,2,3,4,5,6,7,8};
    
    for (int i = 0; i < 6; i++) {
        int actual[] = {8,7,6,5,4,3,2,1};

        sort_array(actual, -5, i);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, -5);
    }
}