#include "stdafx.h"
#include "Grid.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

double distanceBetween(Point p1, Point p2);

Grid::Grid(BoundingBox inBox, int row, int column):mBox(inBox),mRow(row),mColumn(column)
{
	double BB_minX = inBox.getLowerLeft().getX();
	double BB_minY = inBox.getLowerLeft().getY();
	double BB_maxX = inBox.getUpperRight().getX();
	double BB_maxY = inBox.getUpperRight().getX();
	dx = (BB_maxX - BB_minX) / column;
	dy = (BB_maxY - BB_minY) / row;
}

Grid::~Grid()
{
}

void Grid::writeFile(std::string fileName, std::vector<Node> points)
{
	double x, y, val;
	ofstream outStream;
	outStream.open(fileName, ios::out);

	for (std::vector<Node>::iterator it = points.begin(); it != points.end(); ++it)
	{
		x = (*it).getPoint().getX();
		y = (*it).getPoint().getY();
		val = (*it).getValue();
		//loop for getting signed or unsigned fields
		//if (val <= 0)
			outStream << x << " " << y << " " << endl;
	}
	outStream.close();
}


std::vector<Node> Grid::generatePoints(Circle circle)
{
	double BB_minX = mBox.getLowerLeft().getX();
	double BB_minY = mBox.getLowerLeft().getY();
	double BB_maxX = mBox.getUpperRight().getX();
	double BB_maxY = mBox.getUpperRight().getX();
	double a = 0, b = 0, distance;
	std::vector<Node> pointList;

	for (int i = 0; i <= mRow; i++)
	{
		for (int j = 0; j <= mColumn; j++)
		{
			double x, y, val=0;
			x = (BB_minX + a);
			y = (BB_maxY + b);
			Point p(x, y);
			distance = distanceBetween(circle.getCenter(), p);
			val = (distance - circle.getRadius());
			Node node(p, val);
			pointList.push_back(node);
			a += dx;
		}
		b -= dy;
		a = 0;
	}
	return pointList;
}


double distanceBetween(Point p1, Point p2)
{
	double x1 = p1.getX();
	double y1 = p1.getY();
	double x2 = p2.getX();
	double y2 = p2.getY();
	double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return distance;
}