#include "unity.h"
#include "Coordinate.h"
#include "CustomAssertion.h"

void setUp(void){}

void tearDown(void){}

void test_setCoordinate(void){
	Coordinate coor;
  setCoordinate(&coor, 1.1, 2.2, 3.3);

//  TEST_ASSERT_FLOAT_WITHIN(0.00001, 1.1, coor.x);
//  TEST_ASSERT_FLOAT_WITHIN(0.00001, 2.2, coor.y);
//  TEST_ASSERT_FLOAT_WITHIN(0.00001, 3.3, coor.z);


  TEST_ASSERT_COORDINATE(0.00001, 1.2, 2.7, 3.4, coor);
}
