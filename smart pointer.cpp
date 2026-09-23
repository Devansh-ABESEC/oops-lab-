// algo 
// 1.start
// 2.create unique_ptr 
// 3.access object
// 4.create shared_ptr
// 5.shared ownership
// 6. display use_count
// 7. stop
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