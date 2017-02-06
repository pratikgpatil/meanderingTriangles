#include "stdafx.h"
#include "Node.h"


Node::Node(Point point, double value)
{
	mPoint = point;
	mValue = value;
}

//Node::Node()
//{
//}


Node::~Node()
{
}

const double Node::getValue()
{
	return mValue;
}

Point Node::getPoint()
{
	return mPoint;
}


