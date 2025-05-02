#include "Point.h"
#include <iostream>

Point::Point()
{
    x = 0;y = 0;
}

Point::Point(int x, int y)
{
    this->x = x;this->y = y;
}

void Point::Print()
{
    std::cout << "(" << x << "," << y << ")\n";
}

void Point::operator++()
{
    x++;
    y++;
}

void Point::operator--()
{
    x--;
    y--;
}

bool Point::operator>(Point& other) const
{
    return (sqrt((x * x - 2 * x * 0 + 0) + (y * y - 2 * y * 0 + 0)) > sqrt((0 - 2 * 0 * other.x + other.x * other.x) + (0 - 2 * 0 * other.y + other.y * other.y)));
}

bool Point::operator<(Point& other) const
{
    return (sqrt((x * x - 2 * x * 0 + 0) + (y * y - 2 * y * 0 + 0)) < sqrt((0 - 2 * 0 * other.x + other.x * other.x) + (0 - 2 * 0 * other.y + other.y * other.y)));
}

void Point::operator!()
{
    x *= -1;
    y *= -1;
}
