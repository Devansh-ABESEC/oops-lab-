#include <bits/stdc++.h>
using namespace std;

template <class T>
class Stack {
    T arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        arr[++top] = value;
    }

    void pop() {
        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
            top--;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    cout << "After popping: ";
    s.display();

    return 0;
}