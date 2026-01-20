#include "Line.h"

Line::Line(Point point1, Point point2)
:firstPoint(point1.GetxCoord(), point1.GetyCoord()),
secondPoint(point2.GetxCoord(), point2.GetyCoord())
{
    SetPoints(point1, point2);
    SetSlope(GetPoint1(), GetPoint2());
    SetLength(GetPoint1(), GetPoint2());
    SetMidpoint(GetPoint1(), GetPoint2());
}

void Line::SetPoints(Point point1, Point point2)
{
    firstPoint = point1;
    secondPoint = point2;
}
    
Point Line::GetPoint1()
{
    return firstPoint;
}

Point Line::GetPoint2()
{
    return secondPoint;
}

void Line::SetLength(Point point1, Point point2)
{
    double l = sqrt(pow(point2.GetxCoord() - point1.GetxCoord(), 2.0) + pow(point2.GetyCoord() - point1.GetyCoord(), 2.0));
    length = l;
}

double Line::GetLength()
{
    return length;
}

void Line::SetSlope(Point point1, Point point2)
{
    double s = (point2.GetyCoord() - point1.GetyCoord()) / (point2.GetxCoord() - point1.GetxCoord());
    slope = s;
}
double Line::GetSlope()
{
    return slope;
}

bool Line::IsOnLine(Point linePoint)
{
    bool retVal = false;
    if (linePoint.GetyCoord() == GetSlope() * (linePoint.GetxCoord()) + 2.2)
    {
        retVal = true;
    }
    return retVal;
}
void Line::SetMidpoint(Point point1, Point point2)
{
    double xCoord = (point2.GetxCoord() + point1.GetxCoord()) / 2.0;
    double yCoord = (point2.GetyCoord() + point1.GetyCoord()) / 2.0;
    Point middle(xCoord, yCoord);
    midpoint = middle;
}


Point Line::GetMidpoint()
{
    return midpoint;
}

string Line::LineToString()
{
    return "";
}

void Line::ExtendLine(double extendLength)
{

}