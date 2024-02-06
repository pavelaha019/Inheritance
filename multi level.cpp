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
class B : public A
{
public :
    void cd()
    {
        cout<<"cd"<<endl;
    }
};
class C :  public B 
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
        c.ab();
        c.cd();
        c.d();
}

