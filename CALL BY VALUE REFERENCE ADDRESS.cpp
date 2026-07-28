#include <iostream>
using namespace std;


void value(int x)
{
    x = x + 10;
}

void reference(int &x)
{
    x = x + 10;
}

void address(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 10;

    cout << "Original Value = " << a << endl;

    value(a);
    cout << "After Call by Value = " << a << endl;

    reference(a);
    cout << "After Call by Reference = " << a << endl;

    address(&a);
    cout << "After Call by Address = " << a << endl;

    return 0;
}