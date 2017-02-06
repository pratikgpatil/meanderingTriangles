#pragma once
#include<vector>
class Grid
{
public:
	Grid(BoundingBox inBox, int row, int column);
	~Grid();
	//void createGrid(BoundingBox bb, int rows, int columns, Point center, double radius);
	std::vector<Node> generatePoints(Circle circle);
	void writeFile(std::string fileName, std::vector<Node> points);
	//BoundingBox getBoundingBox();
private:
	double dx;
	double dy;
	int mRow, mColumn;
	BoundingBox mBox;
	//std::vector<Node> pointList;
};

