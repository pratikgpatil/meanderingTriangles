#include "stdafx.h"
#include "Circle.h"

Circle::Circle(Point center, double radius) :mCenter(center), mRadius(radius)
{
}

Circle::~Circle()
{
}

Point Circle::getCenter()
{
	return mCenter;
}

const double Circle::getRadius()
{
	return mRadius;
}

BoundingBox Circle::getBoundingBox()
{
	double minX = mCenter.getX() - mRadius;
	double minY = mCenter.getY() - mRadius;
	double maxX = mCenter.getX() + mRadius;
	double maxY = mCenter.getY() + mRadius;
	Point lowerLeft(minX, minY);
	Point upperRight(maxX, maxY);
	BoundingBox bb(lowerLeft, upperRight);
	return bb;
}
