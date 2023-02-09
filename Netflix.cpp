#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	int x,y,z,w;
	cin >> x >> y >> z >> w;
	if(x+y>=w || y+z>=w || x+z>=w)
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