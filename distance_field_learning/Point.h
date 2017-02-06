#pragma once
class Point
{
public:
	Point(double x=0.0,double y=0.0);
	~Point();
	const double getX();
	const double getY();
	//void setX(const double x);
	//void setY(const double y);
private:
	double mX;
	double mY;
};

