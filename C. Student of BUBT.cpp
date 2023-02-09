#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,pass=0,count=0;
		cin >> x;
		for(int i=1;i<=x;i++)
		{
			int m,a1,a2,a3;
			cin>> m >> a1 >> a2 >> a3;
			pass=(a1+a2+a3);
			if(pass>=m)
			{
				count++;
			}
		}
		if(x==count)
		{
			cout<<"PASS\n";
		}
		else
		{
			cout<<"FAIL\n";
		}
		count=0;
	}
	return 0;
}