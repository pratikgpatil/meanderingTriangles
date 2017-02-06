#pragma once
class Node
{
public:
	Node(Point point, double value);
	//Node();
	~Node();

	const double getValue();
	Point getPoint();
private:
	Point mPoint;
	double mValue;
};

