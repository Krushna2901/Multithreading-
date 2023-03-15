#include<iostream>
using namespace std;
#pragma pack(2)

struct demo{
    int n;
    float f;
    char ch;
};

struct demo1{
    int n1;
    double d;
}ob={23,45.1234};

int main()
{
    struct demo *obj = new struct demo();
    cout<<sizeof(obj);
    struct demo obj1 ;
    cout<<ob.n1<<"\n";
    cout<<ob.d<<"\n";
    cout<<"\n"<<sizeof(obj1);
    return 0;
}