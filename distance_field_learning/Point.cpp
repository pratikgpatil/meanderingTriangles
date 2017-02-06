#include "stdafx.h"
#include "Point.h"


//Point::Point()
//{
//}
//

Point::Point(double x, double y):mX(x),mY(y)
{
}

Point::~Point()
{
}

const double Point::getX()
{
	return mX;
}

const double Point::getY()
{
	return mY;
}

/*void Point::setX(const double x)
{
	mX = x;
}

void Point::setY(const double y)
{
	mY = y;
}*/
