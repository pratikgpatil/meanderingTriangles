#pragma once
class Circle
{
public:
	Circle(Point center, double radius);
	~Circle();
	Point getCenter();
	const double getRadius();
	BoundingBox getBoundingBox();
private:
	Point mCenter;
	double mRadius;
};

