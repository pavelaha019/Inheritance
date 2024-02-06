#include<iostream>
using namespace std;
class A
{
 public :
     void ab()
    {
        cout<<"ab"<<endl;
    }

}; 
class B 
{
public :
    void cd()
    {
        cout<<"cd"<<endl;
    }
};
class C : public A, public B 
{
public :
     void d()
     {
        cout<<"d"<<endl;
     }
};
int main()
{
        C c;
        c.d();
}

