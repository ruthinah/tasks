#include <iostream>
#include "Rectangle1.h"

using namespace std;


int main() {
    float length, width;

    
    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    cout << "Enter the width of the first rectangle: ";
    cin >> width;

    Rectangle rect1;


    rect1.setLength(length);
    rect1.setWidth(width);

    
    cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;


    cout << "\nEnter the length of the second rectangle: ";
    cin >> length;
    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    
    Rectangle rect2(length, width);

    cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}
