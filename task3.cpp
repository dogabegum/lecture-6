#include <iostream>
#include <fstream>
using namespace std;

double getAverage(string filename) {
    ifstream file(filename);
    int arr[100];
    int count = 0, x;
    double sum = 0;

    while (file >> x) {
        arr[count++] = x;
        sum += x;
    }
    file.close();

    return sum / count;
}

int main() {
    cout << "Average: " << getAverage("grades.txt") << endl;
    return 0;
}
