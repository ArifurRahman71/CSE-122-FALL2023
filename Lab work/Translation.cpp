#include<iostream>
using namespace std;
int main()
{
	string s;
	string t;
	cin>>s>>t;
	reverse(s.begin(),s.end());
	if(s==t)
		cout<<"YES";
	else
		cout<<"NO";



}
