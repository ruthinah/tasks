#include "Area.h"
#include <cmath>

double Area::calculateArea(const shapes::Square& square) {
    double side = square.getSideLength();
    return side * side;
}

double Area::calculateArea(const shapes::Triangle& triangle) {
    double base = triangle.getBase();
    double height = triangle.getHeight();
    return 0.5 * base * height;
}

double Area::calculateArea(const shapes::Circle& circle) {
    double radius = circle.getRadius();
    return M_PI * radius * radius;
}
