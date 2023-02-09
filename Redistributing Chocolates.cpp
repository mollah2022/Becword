#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	int x,y,z;
	cin >> x >> y >> z;
	int sum=0;
	sum = (x+y+z);

	if(sum>4)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
	return 0;
}