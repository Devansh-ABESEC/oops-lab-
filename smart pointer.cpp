#include<bits/stdc++.h>
#include <memory>
using namespace std;

class Demo
{
    public:
    void display()
    {
        cout<<"Smartpointer in C++";

    }
};
int main()
{
    unique_ptr<Demo> p1 = make_unique<Demo>();
    p1->display();
    shared_ptr<Demo> p2 = make_shared<Demo>();
    shared_ptr<Demo> p3 = p2;
    cout<<"\n count="<<p2.use_count();
    return 0;
}