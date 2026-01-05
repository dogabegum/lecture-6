#include <iostream>
using namespace std;

void swap(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b);

    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
