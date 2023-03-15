#include<iostream>
#include<thread>

using namespace std;
void fun()
{
    cout<<"\nInside fun ::";
}

void gun(int n,int m)
{
    cout<<"\nInside gun ::"<<n+m;
}
int main()
{
    thread t1(gun,56,56);
    thread t(fun);
    
    t.join();
    t1.join();
    return 0;
}
