#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "Point.h"
#include "Line.h"
using namespace std;


//--
TEST_CASE("Points and Lines")  
{ 
	SECTION("Basic Point")
	{
		Point point1(2.4, 1.3);
		REQUIRE(10 == 10);
		REQUIRE(point1.GetxCoord() == 2.4);
		REQUIRE(point1.GetyCoord() == 1.3);
		point1.PointsToString();
		REQUIRE(point1.PointsToString() == "[X: 2.4, Y: 1.3]"); 
	}

	SECTION("Basic Line")
	{
		Point point4(1.3, 3.5);
		Point point2(1.2, 3.4);
		Point point3(5.6, 7.8);
		Line line1(point2, point3);

		REQUIRE(line1.GetLength() == 6.2);
		REQUIRE(line1.GetSlope() == 1);
		REQUIRE(line1.IsOnLine(point4) == false);
		REQUIRE(line1.Midpoint() == );
		REQUIRE(line1.LineToString == );
		line1.ExtendLine(2);
		REQUIRE(line1.LineToString == );
	}
}