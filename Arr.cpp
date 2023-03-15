#include<iostream>

using namespace std;

int main()
{

    int n,count=0;;
    cout<<"\nEnter a digit ::";
    cin>>n;

    for(int i=2;i<=n/2;i++)
    {
        count=0;
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count<=0)
    {
          cout<<"\nNumber is prime";
    }
    else{
        cout<<"\nnot prime";
    }
    return 0;
}