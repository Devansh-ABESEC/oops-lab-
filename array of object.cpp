#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    void getdata()
    {
        
        cin>>name;
        cout<<"Enter name: "<<name<<"\n";
        
        cin>>roll;
        cout<<"Enter roll number: "<<roll<<"\n";
    }
    void display()
    {
        cout << "Name: " << name <<"\t"<<"Roll No:"<< roll<< endl;
    }

};
int main()
{
    Student s[3]; // array of objects
    for(int i=0;i<3;i++)
    {
        s[i].getdata();
    }
    for(int i=0;i<3;i++)
    {
        s[i].display();
    }
    return 0;
}