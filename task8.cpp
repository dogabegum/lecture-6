#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("students.log");
    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }
    file.close();

    cout << "Total lines: " << count << endl;
    return 0;
}
