#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Point
{
public:
    Point(double xCoord, double yCoord);
    Point();
    void SetxCoord(double xCoord);
    void SetyCoord(double yCoord);
    double GetxCoord();
    double GetyCoord();
    string PointsToString();
    
private:
    double x;
    double y;
};