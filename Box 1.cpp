#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k=0;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		int x;
		cin>>x;
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=x;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		if(k!=t)
		{
		cout<<endl;
	}
	}
	return 0;
}