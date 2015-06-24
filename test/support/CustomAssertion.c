#include "CustomAssertion.h"
#include "Coordinate.h"

void customTestAssertCoordinate(float within, float x, float y, float z, Coordinate actual, int lineNo){
  
  
  if(!((x - within < actual.x) && (actual.x < x + within)))
    CUSTOM_TEST_FAIL(lineNo,"Expected x = %f, but was %f", x, actual.x);
  if(!((y - within < actual.y) && (actual.y < y + within)))
    CUSTOM_TEST_FAIL(lineNo,"Expected y = %f, but was %f", y, actual.y);
  if(!((z - within < actual.z) && (actual.z < z + within)))
    CUSTOM_TEST_FAIL(lineNo,"Expected z = %f, but was %f", z, actual.z);  
}