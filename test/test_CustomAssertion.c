#include "unity.h"
#include "CustomAssertion.h"
#include "Coordinate.h"
#include <stdio.h>

#define PRINT_MSG(x)    printf("%s, I am at line %d\n", x, __LINE__)

void setUp(void){}

void tearDown(void){}

void test_assertEqual(int v1, int v2, int lineNo){
  printf("At line (%d): I don't get what I expected\n", lineNo);
}

void test_customAssert(void){
	printf("line no is: %d\n", __LINE__);
	printf("file name is: %s\n", __FILE__);

  PRINT_MSG("This is a message...what do you think!");
//  printf("%s\n", "This is a message......What do you think?");

  test_assertEqual(2,5,__LINE__);

  _TEST_ASSERT_EQUAL(2,5);

  TEST_ASSERT_EQUAL(3,5);
}
