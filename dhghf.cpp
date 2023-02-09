#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,zero=0,one=0;
		cin >> x;
		string s1;
		cin>>s1;
		for(int i=0;i<x;i++)
		{
			if(s1[i]=='0')
				zero++;
			else
				one++;
		}
		if(zero==0)
		{
			cout<<1<<endl;
			continue;
		}
			if(one==zero)
			{

				cout<<one<<endl;
			}
			if(one>zero)
			{

				cout<<zero+1<<endl;
			}
			else
			{

				cout<<one<<endl;
			}
		
	}
	return 0;
}