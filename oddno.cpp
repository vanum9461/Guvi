#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a%2==0)
    {
        for(int i=a+1;i<b;i+=2)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        for(int i=a+2;i<b;i+=2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
