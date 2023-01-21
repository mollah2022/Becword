#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		if(x<3)
		{
			cout<<"LIGHT\n";
		}
		else if(x>=3 && x<7)
		{
			cout<<"MODERATE\n";
		}
		else
		{
			cout<<"HEAVY\n";
		}
	}
	return 0;
}
