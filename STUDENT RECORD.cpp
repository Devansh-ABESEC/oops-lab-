#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name; int roll, m1,m2,m3,m4,m5;
    float p,a;
    void input()
    {
    cin>>name>>roll>>m1>>m2>>m3>>m4>>m5;
    }
    void calculate()
    { a = (m1+m2+m3+m4+m5)/5;
      p = ((m1+m2+m3+m4+m5) * 100.0) / 500;
    }
    void display()
    {
        cout<<"Name of Student:"<<name<< "\t"<<"Roll No of Student:"<<roll<<endl;;
       
        cout<<"Mathematics:"<<m1<<endl;
        cout<<"English:"<<m2<<endl;
        cout<<"Science:"<<m3<<endl;
        cout<<"Computer:"<<m4<<endl;
        cout<<"Social Science:"<<m5<<endl;
        cout<<"Average:"<<a<<endl;
        cout<<"Percentage:"<<p;
    }
};
int main()
{
  Student s;
  s.input();
  s.calculate();
  s.display();
}