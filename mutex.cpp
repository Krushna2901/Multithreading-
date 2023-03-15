#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int addmoney =4;
mutex m;

void add()
{ 
    m.lock();
    ++addmoney;
    m.unlock();
}

int main()
{
    thread t1(add);
    thread t2(add);
    t1.join();
    t2.join();
    cout<<addmoney<<"\n";
    return 0;
}