#include<bits/stdc++.h>
using namespace std;    
class Student
{
    private:
    int marks = 90;
    public:
    friend class Teacher; 
};
class Teacher
{
    public:
    void display(Student s)
    {
        cout<<"Marks of Student:"<<s.marks;
    }
};
int main()
{
    Student s;
    Teacher t;
    t.display(s);
    return 0;
}