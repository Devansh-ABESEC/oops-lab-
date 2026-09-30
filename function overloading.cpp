//algo
//1. start
//2. create overload functionc
//3. pass int values
//4. pass double values
//5. display sum of int values
//6. display sum of double values
//7. stop
#include<bits/stdc++.h>
using namespace std;

class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
};
int main()
{
    Calculator c;
    cout<<"Sum of 2 integers: "<<c.add(10,20);
    cout<<"\nSum of 2 doubles: "<<c.add(10.5,20.5);
    return 0;
}