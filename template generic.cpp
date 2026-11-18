#include <bits/stdc++.h>
using namespace std;

template <class T>
void swapElements(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float p = 2.5, q = 5.5;

    cout << "Before swapping integers: " << x << " " << y << endl;
    swapElements(x, y);
    cout << "After swapping integers: " << x << " " << y << endl;

    cout << "\nBefore swapping floats: " << p << " " << q << endl;
    swapElements(p, q);
    cout << "After swapping floats: " << p << " " << q << endl;

    return 0;
}