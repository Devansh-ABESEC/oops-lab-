#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    void display()
    {
        cout << "Name: " << name << endl;
    }

};
int main()
{
    Student s1;
    Student *ptr = &s1; // pointer to object
    ptr->name = "John"; // accessing member using pointer
    ptr->display(); // calling member function using pointer

    return 0;
}
