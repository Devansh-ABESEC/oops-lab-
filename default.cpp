#include <bits/stdc++.h>
using namespace std;
inline int square(int n)
{
    return n*n;
}
int add(int a,int b=10)
{
    return a + b;
}
int calculate(int a,int b,int c)
{
    return a + b + c;
}
double calculate(double a,double b)
{
    return a * b;
}
int main() 
{
	cout<<"Inline Function"<<endl;
	cout<<"Square of 5 = "<<square(5)<<endl;
	
	cout<<"\nDefault argument function"<<endl;
	cout<<"Add(30) = "<<add(30)<<endl;
	cout<<"Add(40,50) = "<<add(40,50)<<endl;
	
	cout<<"\nFunction overloading"<<endl;
	cout<<"Multiplication of two Integer(20,300) = "<<calculate(20,300)<<endl;
	cout<<"Addition of three Integer(20,30,40) = "<<calculate(20,30,40)<<endl;
	cout<<"Multiplication of two doubles(2.5,4.0) = "<<calculate(2.5,4.0)<<endl;
	
	return 0;
	

}