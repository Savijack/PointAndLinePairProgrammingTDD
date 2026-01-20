#include "Point.h"

Point::Point(double xCoord, double yCoord)
{
    SetxCoord(xCoord);
    SetyCoord(yCoord);
}

void Point::SetxCoord(double xCoord)
{
    //change
    x = xCoord;
}

void Point::SetyCoord(double yCoord)
{
    y = yCoord;
}

double Point::GetxCoord()
{
    return x;
}

double Point::GetyCoord()
{
    return y;
}

string Point::PointsToString()
{
    stringstream temp;
    stringstream xCo;
    xCo << "[X: " << fixed << setprecision(1) << x << ", ";
    stringstream yCo;
    yCo << "Y: " << fixed << setprecision(1) << y << "]";
    temp << xCo.str() << yCo.str();

    string finalString = temp.str();
    
    return finalString;
}