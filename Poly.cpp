#include<iostream>
#include<thread>
using namespace std;

class base{
    public:
    int x;void fun(int n)
    {
        for (int  i = 0; i <n; i++)
        {
            cout<<i<<"\t";
        }
        cout<<"\n";  
    }
};
class demo:public base{
    public:
    void fun(int n)
    {
          n-=4;
        for(int i=0;i<n;i++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
};
int main(){
    demo *obj;
    obj->fun(7);
}