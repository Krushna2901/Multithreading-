#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

using namespace std;


int myamount=0;
timed_mutex m;

void increment(int i)
{
    if(m.try_lock_for(chrono::seconds(2))){
        ++myamount;
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"thread "<<i<<endl;
        m.unlock();
    }
    else{
        cout<<i<<endl;
    }
}

int main()
{
    thread t1(increment,1);
    thread t2(increment,2);
    t1.join();
    t2.join();
    cout<<"My amount :: "<<myamount<<"\n";
}