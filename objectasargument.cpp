//algo
// 1.start 
// 2.create complex class 
// 3.Define constructor 
// 4.create add function accepting object as argument
// 5. return resultant object
// 6. create objects
// 7. call functions 
// 8. display result
// 9. stop
#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int real ,imag;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
Complex add(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
};
int main()
{
    Complex c1(3,4),c2(5,6);
    Complex c3=c1.add(c2);
    c3.display();
    return 0;
}