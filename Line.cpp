#include "Line.h"

Line::Line(Point point1, Point point2)
{
    SetSlope(point1, point2);
    SetLength(point1, point2);
}

void Line::SetLength(Point point1, Point point2)
{

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

}

Point Line::Midpoint()
{

}

string Line::LineToString()
{

}

void Line::ExtendLine(double extendLength)
{

}