#include<iostream>
#include<math.h>
using namespace std;

int checkarm(int n)
{
    int c=0,r,s=0;
    int p=n;
    while(p)
    {
        c++;
        p/=10;
    }
    int t=n;
    while(n!=0)
    {
         r=n%10;
         s=s+pow(r,c);
        n=n/10;
    }
    if(s==t)
    return 1;
    else return 0;

}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        int p=checkarm(i);
        if(p==1)
        cout<<i<<" ";
    }
    
    return 0;
}
