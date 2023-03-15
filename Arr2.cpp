#include<iostream>

using namespace std;

class base{
    protected:
    int a;
    int b;
    public:
    base(int n,int n1)
    {
        a=n;
        b=n1;
    }
    void sum()
    {
        cout<<"\n"<<a+b;
    }
};
class derived:public base{
    public:
    int d;
    derived(int n,int n1):base{n,n1}
    {d=90;}
    void fun()
    {
        cout<<"\nfun in derived class :: "<<d;
    }
};
class demo :public derived{
    public :
    float f;
    demo(int n,int m):derived{n,m}
    {
        f=45.32;
    }
    void gun()
    {
        cout<<"\n"<<f+a+b<<"\n";
    }
};
int main()
{
    demo *obj = new demo(45,66);
    obj->fun();
    // obj.sum();
    obj->gun();
    return 0;
}