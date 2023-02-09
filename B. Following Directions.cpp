#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,x=0,y=0,found=0;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		string s1;
		cin >> s1;

		for(int i=0;i<x;i++)
		{
			if(s1[i]=='U')
			{
				x++;
			}
			else if(s1[i]=='D')
			{
				x--;
			}
			else if(s1[i]=='R')
			{
				y++;
			}
			else
			{
				y--;
			}
			if(x==1 && y==1)
			cout<<"YES\n";
		   return 0;
		}
		cout<<"NO\n";
	}
		

	return 0;
}