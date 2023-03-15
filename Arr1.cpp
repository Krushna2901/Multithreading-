#include<iostream>
#include<thread>
using namespace std;

class Arrb{
    public:
    int size;
    int *Arr;
    Arrb(int N)
    {
        size = N;
        Arr = new int[size];
    }
    void Accept()
    {
        int i=0;
        for(i=0;i<size;i++)
        {
            cin>>Arr[i];
        }
    }
    void display()
    {
        for(int j=0;j<size;j++)
        {
            cout<<Arr[j]<<"\t";
        }
        cout<<"\n";
    }
};

class Arr2 :public Arrb{
    public:
    int sum;
    public:
    Arr2(int n):Arrb{n}
    { sum=0;   }
    int Addition()
    {
        for(int i=0;i<size;i++)
        {
            sum+=Arr[i];
        }
        return sum;
    }
};

int main()
{
    int n;
    cout<<"\nInput size of array ::";
    cin>>n;
    Arr2 obj(n);
    obj.Accept();
    obj.display();
    int r = obj.Addition();
    cout<<"sum of array elements are :: "<<r;

    return 0;
}