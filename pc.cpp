#include<iostream>

using namespace std;
int main()
{
    int n = 45;
    float f = 45.4;
    double d =45.5623;
    char ch = 'c';
    int *p = &n;
    cout<<p<<endl;
    cout<<&n<<endl;
    cout<<&p<<endl;
    cout<<sizeof(n)<<endl;
    cout<<sizeof(p)<<endl;
    int arr[] = {3,4,5,21}; 
    cout<<arr<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<sizeof(arr)<<endl;

    cout<<arr[0]<<endl;
    
    return 0;
}