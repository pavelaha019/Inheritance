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
        cout<<"cd";
    }
};
int main()
{
        B b;
        b.ab();
        b.cd();

}

