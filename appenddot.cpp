#include<iostream>
#include<string> 
using namespace std;

int main() {
	string s;
	getline(cin,s);
	string s1=".";
	s.append(s1);
	cout<<s;
	return 0;
}
