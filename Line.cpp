#include "Line.h"

Line::Line(Point point1, Point point2)
 //: firstPoint(10.0, 10.0/*point1.GetxCoord(), point1.GetyCoord()*/), secondPoint(10.0, 10.0/*point1.GetxCoord(), point1.GetyCoord()*/)
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
    stringstream lineLength;
    lineLength << fixed << setprecision(1) << l;
    string lengthString = lineLength.str();
    l = stod(lengthString);
    length = l;
}

double Line::GetLength()
{
    return length;
}

void Line::SetSlope(Point point1, Point point2)
{
    double s = (point2.GetyCoord() - point1.GetyCoord()) / (point2.GetxCoord() - point1.GetxCoord());
    stringstream lineSlope;
    lineSlope << fixed << setprecision(1) << s;
    string slopeString = lineSlope.str();
    s = stod(slopeString);
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
    double newX = ((GetPoint2().GetxCoord() - GetPoint1().GetxCoord()) / GetLength()) * extendLength;
    double newY = ((GetPoint2().GetyCoord() - GetPoint1().GetyCoord()) / GetLength()) * extendLength;

    double newX2 = ((GetPoint1().GetxCoord() - GetPoint2().GetxCoord()) / GetLength()) * extendLength;
    double newY2 = ((GetPoint1().GetyCoord() - GetPoint2().GetyCoord()) / GetLength()) * extendLength;

    firstPoint.SetxCoord(newX);
    firstPoint.SetyCoord(newY);

    secondPoint.SetxCoord(newX2);
    secondPoint.SetyCoord(newY2);
}