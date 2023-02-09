#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,zero=0,one=0;
	cin >> t;
	while(t--)
	{
		int g;
		cin >> g;
		string s1;
		cin >> s1;
		for(int i = 0;i < g;i++)
		{
			if(s1[i]=='0')
			{
				zero++;
			}
			else
			{
				one++;
			}
		}
		if(one==0)
		{
			cout<<1<<endl;
			continue;
		}
		 if(one==zero)
		{
			cout<<0<<endl;
		}
		 if(zero > one)
		{
			cout<<one+1<<endl;
		}
		else
		{
			cout<<zero<<endl;
		}
		zero=0;
		one=0;
	}
	return 0;
}