#include<iostream>
using namespace std;

int main()
{
    string str =NULL;
    cin>>str;
    // cout<<str<<"\n";
    // cout<<str.length()<<"\n";
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}