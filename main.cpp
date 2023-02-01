#include "Circle.h"
#include "Rectangle.h"
#include <stdio.h>

int main()
{
    Circle circle;
    Rectangle rectangle;

    circle.size();
    circle.draw();
    printf("---------------\n");
    rectangle.size();
    rectangle.draw();

    return 0;
}







