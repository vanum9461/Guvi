#include <iostream>
using namespace std;

int main() {
	int n,p;
    cin>>n>>p;
    int i,t=1;
    for(i=1;i<=p;i++)
    t=t*n;
    cout<<t;
	return 0;
}

