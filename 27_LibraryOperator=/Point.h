
#pragma once
#include <iostream>
class Point
{
    int x, y;

public:
    Point();
    Point(int x, int y);
    void Print();
    void operator ++();
    void operator --();
    bool operator >(Point& other) const;
    bool operator <(Point& other) const;
    void operator !();

};

