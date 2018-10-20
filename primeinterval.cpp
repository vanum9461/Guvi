#include<iostream>
using namespace std;

int checkprime(int n)
{int c=0;
    if(n>1)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
            if(c>0)
            {
                return 0;
            }
            else return 1;
        
    }
    else return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a+1;i<b;i++)
    {
        int p=checkprime(i);
        if(p==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
