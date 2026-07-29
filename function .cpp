#include <iostream>
using namespace std;

class Student
{
public:
    int marks;

    Student(int m = 50)
    {
        marks = m;
    }

    void callByValue(Student s)
    {
        s.marks = s.marks + 10;
        cout << "Call by Value: " << s.marks << endl;
    }
    void callByReference(Student &s)
    {
        s.marks = s.marks + 10;
    }
    void callByAddress(Student *s)
    {
        s->marks = s->marks + 10;
    }
    inline int square(int x)
    {
        return x * x;
    }
    int addMarks(int x = 10)
    {
        return marks + x;
    }
    void display()
    {
        cout << "Marks: " << marks << endl;
    }

    void display(string name)
    {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(50);

    cout << "Original Marks: " << s1.marks << endl;

    // Call by Value
    s1.callByValue(s1);
    cout << "After Call by Value: " << s1.marks << endl;

    // Call by Reference
    s1.callByReference(s1);
    cout << "After Call by Reference: " << s1.marks << endl;

    // Call by Address
    s1.callByAddress(&s1);
    cout << "After Call by Address: " << s1.marks << endl;

    // Inline Function
    cout << "Square: " << s1.square(5) << endl;

    // Default Argument
    cout << "Marks after adding default value: "
         << s1.addMarks() << endl;

    // Function Overloading
    s1.display();
    s1.display("Rahul");

    return 0;
}