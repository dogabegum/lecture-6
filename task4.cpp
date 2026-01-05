#include <iostream>
using namespace std;

void printInfo(string name, int age) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

void printInfo(string course, int code) {
    cout << "Course: " << course << ", Code: " << code << endl;
}

int main() {
    printInfo("Ahmet", 20);
    printInfo("C++", 101);
    return 0;
}
