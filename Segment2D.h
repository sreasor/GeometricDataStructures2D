#ifndef SEGMENT2D_H
#define SEGMENT2D_H
#include "SimplePoint2D.h"
struct Segment2D
{
	SimplePoint2D leftEndPoint, rightEndPoint;
	Segment2D();
	Segment2D(const Segment2D& s);
	Segment2D(SimplePoint2D l, SimplePoint2D r);
	Segment2D(Segment2D&& s);
	void operator=(const Segment2D s);
	bool operator<(const Segment2D s);
	bool operator<=(const Segment2D s);
	bool operator==(const Segment2D s);
	bool operator>=(const Segment2D s);
	bool operator>(const Segment2D s);
	bool operator!=(const Segment2D s);
};
#endif
