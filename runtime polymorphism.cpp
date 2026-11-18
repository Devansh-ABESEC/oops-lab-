#include <bits/stdc++.h>
using namespace std;

class Base 
{
public:
    virtual void display() 
    {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base 
{
public:
    void display() 
    {
        cout << "Derived class display function" << endl;
    }
};

int main() 
{
    Base *ptr;
    Base b;
    Derived d;

    ptr = &b;
    ptr->display();

    ptr = &d;
    ptr->display();

    return 0;
}