#include "stdafx.h"
#include "BoundingBox.h"

BoundingBox::BoundingBox(Point lowLeft, Point uppRight):lowerLeft(lowLeft), upperRight(uppRight)
{
}

BoundingBox::~BoundingBox()
{
}

BoundingBox::BoundingBox()
{
}

 Point BoundingBox::getLowerLeft()
{
	return lowerLeft;
}

 Point BoundingBox::getUpperRight()
{
	return upperRight;
}
