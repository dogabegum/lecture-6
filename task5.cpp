#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;
};

int main() {
    Car cars[3] = {
        {"Ford", 2020},
        {"BMW", 2019},
        {"Toyota", 2022}
    };

    for (int i = 0; i < 3; i++) {
        cout << cars[i].brand << " " << cars[i].year << endl;
    }
    return 0;
}
