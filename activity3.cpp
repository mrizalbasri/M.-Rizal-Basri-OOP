#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
    void displayArea() {
        cout << "Rectangular area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(10.0, 12.0);
    rect.displayArea();

    return 0;
}
