#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int minVal, maxVal;

    findMinMax(arr, 5, minVal, maxVal);

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    return 0;
}
