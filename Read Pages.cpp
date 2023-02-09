#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y,z,temp=0;

		cin >> x >> y >> z;

		temp=(z*y);

		if(temp >= x)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		temp=0;
	}
	return 0;
}