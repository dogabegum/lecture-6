#include <iostream>
#include <fstream>
using namespace std;

class Car {
public:
    string brand;
    int year;
};

int main() {
    ifstream file("data.txt");
    Car cars[100];
    int count = 0;

    while (file >> cars[count].brand >> cars[count].year) {
        count++;
    }
    file.close();

    for (int i = 0; i < count; i++) {
        cout << cars[i].brand << " " << cars[i].year << endl;
    }
    return 0;
}
