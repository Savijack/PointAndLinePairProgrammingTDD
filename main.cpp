#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "Point.h"
using namespace std;


//--
TEST_CASE("Points")  
{ 
	SECTION("Basic Point")
	{
		Point Point1(2.4, 1.3);
		REQUIRE(10 == 10);
		REQUIRE(Point1.GetxCoord() == 2.4);
		REQUIRE(Point1.GetyCoord() == 1.3);
		Point1.PointsToString();
		REQUIRE(Point1.PointsToString() == "[X: 2.4, Y: 1.3]"); 
	}
}