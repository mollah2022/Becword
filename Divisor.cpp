#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int x;
		cin>>x;
		cout<<"Case "<<i<<": ";
		for(int j=1;j<=x;j++)
		{
			if(x%j==0)
			{
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}