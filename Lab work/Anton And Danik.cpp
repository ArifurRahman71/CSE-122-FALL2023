#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,a=0,d=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A')
		{
			a++;
		}
		else
			d++;
	}

	if(a>d)
		cout<<"Anton"<<endl;
	else if(a<d)
		cout<<"Danik"<<endl;
	else
		cout<<"Friendship"<<endl;


}
