#include<iostream>
#include<chrono>
#include<thread>

using namespace std;
using namespace std::chrono;


void fun()
{
    cout<<"Inside fun ::\n"<<"\n";
}
void gun(int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    auto starttime = high_resolution_clock::now();
    thread t1(gun,6);
    thread t(fun);
    
    t.join();
    t1.join();
    auto stoptime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stoptime-starttime);
    cout<<duration.count()/1000000<<"\n";

    return 0;
}