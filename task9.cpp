#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double getRadius() {
        return radius;
    }
};

void printCircleInfo(Circle c) {
    double area = 3.14159 * c.getRadius() * c.getRadius();
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << area << endl;
}

int main() {
    Circle c(5);
    printCircleInfo(c);
    return 0;
}
