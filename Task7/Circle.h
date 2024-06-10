#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle(); // Default constructor
        Circle(double r); // Overloaded constructor
        ~Circle(); // Destructor

        // Accessor methods
        void setRadius(double r);
        double getRadius() const;
    };
}

#endif
