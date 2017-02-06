// distance_field_learning.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"Grid.h"
#include<algorithm>

void fieldUnion(Circle c1, Circle c2);
int gridSizeRow, gridSizeColumn;
int main()
{
	double centerX, centerY, radius;

	std::cout << "Enter x and y coordinates of center of circle : ";
	std::cin >> centerX >> centerY;
	std::cout << "Enter radius of circle : ";
	std::cin >> radius;
	std::cout << "Enter grid size (Rows, Columns): ";
	std::cin >> gridSizeRow >> gridSizeColumn;
	
	Point center(centerX,centerY);
	Circle circle(center, radius);
	
	Point p2(3, 3);
	Circle c2(p2, 5);

	//fieldUnion(circle, c2);
//************************************************

	BoundingBox bb=circle.getBoundingBox();
	//bb.createBoundingBox(center, radius);
	Grid grid(bb, gridSizeRow, gridSizeColumn);
	
	auto points = grid.generatePoints(circle);
	//auto points = grid.generatePoints();
	grid.writeFile("grid.txt",points);
    return 0;
}

//void fieldUnion(Circle c1, Circle c2)
//{
//	BoundingBox b1 = c1.getBoundingBox();
//	BoundingBox b2 = c2.getBoundingBox();
//
//	double minX = std::min(b1.getLowerLeft().getX(), b2.getLowerLeft().getX());
//	double minY = std::min(b1.getLowerLeft().getY(), b2.getLowerLeft().getY());
//	double maxX = std::max(b1.getUpperRight().getX(), b2.getUpperRight().getX());
//	double maxY = std::max(b1.getUpperRight().getY(), b2.getUpperRight().getY());
//
//	BoundingBox bb(Point(minX, minY), Point(maxX, maxY));
//
//	Grid grid(bb, gridSizeRow, gridSizeColumn);
//	auto points = grid.generatePoints();
//	grid.writeFile("grid.txt", points);
//}