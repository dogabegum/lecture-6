#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    string name;
    int id;
    string adress;
    string favourite_color;

public:
    Student(string n, int i, string a, string c) {
        name = n;
        id = i;
        adress = a;
        favourite_color = c;
    }

    void saveToFile() {
        ofstream file("students.log", ios::app);
        file << name << " " << id << " " << adress << " " << favourite_color << endl;
        file.close();
    }
};

int main() {
    Student s1("Ali", 101, "Ankara", "Blue");
    Student s2("Ayse", 102, "Istanbul", "Red");

    s1.saveToFile();
    s2.saveToFile();

    return 0;
}
