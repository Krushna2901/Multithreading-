#include<iostream>

using namespace std;

void fun()
{
    int b = 44;
    cout<<"\nvalue of b is ::"<<b<<endl;
}
void fun1()
{
    int b1 = 44;
    cout<<"\nvalue of b1 is ::"<<b1<<endl;
    fun();
}
void fun2()
{
    int b2 = 44;
    cout<<"\nvalue of b2 is ::"<<b2<<endl;
    fun1();
}
void fun3()
{
    int b3 = 44;
    cout<<"\nvalue of b3 is ::"<<b3<<endl;
    fun2();
}


int main()
{
    int a =23;
    cout<<"\nvalue of  a is ::"<<a;
    fun3();
    return 0;
}