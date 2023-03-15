#include<iostream>
#include<math.h>
using namespace std;

void Decimal(int no)
{
    double i=0;
    int sum=0;
    while(no!=0)
    {
        int digit = no%10;
        sum = sum+(digit*pow(2,i));
        i++;
        no = no/10;        
    }
    cout<<sum<<"\n";
}
int main()
{
    int n = 0;
    cout<<"\nInput a binary number ::";
    cin>>n;
    Decimal(n);
    return 0;
}