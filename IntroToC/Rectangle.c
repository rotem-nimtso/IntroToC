#include "Rectangle.h"

int area(Rectangle rectangle)
{
    return (rectangle.width * rectangle.height);
}

Rectangle greaterArea(Rectangle r1, Rectangle r2)
{
    return (area(r1) > area(r2)) ? r1 : r2;
}

int canCounsume(Rectangle r1, Rectangle r2)
{
    if ((r1.width > r2.width) && (r1.height > r2.height))
    { return 0; }

    if ((r1.width < r2.width) && (r1.height < r2.height))
    { return 0; }

    return 1;
}
