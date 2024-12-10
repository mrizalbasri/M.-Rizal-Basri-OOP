#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;


    void displayInfo() {
        cout << "Car Details:" << endl;
        cout << "Brand:"  << brand << " Model:" << model << " Year:" << year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 2023; 

    car1.displayInfo();

    return 0;
}
