#pragma once

#include "Point.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>

using namespace std;

class Line
{
public:
    Line(Point point1, Point point2);
    void SetLength(Point point1, Point point2);
    double GetLength();
    void SetSlope(Point point1, Point point2);
    double GetSlope();
    bool IsOnLine(Point linePoint);
    Point Midpoint();
    string LineToString();
    void ExtendLine(double extendLength);
private:
    double slope;
    double length;
};