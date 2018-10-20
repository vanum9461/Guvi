#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
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
    cout<<"yes";
    else cout<<"no";
    return 0;
}
