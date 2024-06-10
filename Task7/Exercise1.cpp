#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;

    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect;


    rect.setLength(length);
    rect.setWidth(width);

    
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
