#pragma once
class BoundingBox
{
public:
	BoundingBox(Point lowLeft, Point uppRight);
	~BoundingBox();
	BoundingBox();
	Point getLowerLeft();
	Point getUpperRight();
private:
	Point lowerLeft;
	Point upperRight;
};

