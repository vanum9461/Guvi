#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
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
                cout<<"no"<<endl;
            }
            else cout<<"yes"<<endl;
        
    }
    else cout<<"no"<<endl;

    return 0;
}
