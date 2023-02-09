#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y,z;
		double A=0,B=0,C=0;

		cin >> x >> y >> z;
		A=(400/(double)x);
		B=(400/(double)y);
		C=(400/(double)z);

		if(A>B && A>C)
		{
			cout<<"ALICE\n";
		}
		else if(B>A && B>C)
		{
			cout<<"BOB\n";
		}
		else
		{
			cout<<"CHARLIE\n";
		}
	}
	return 0;
}