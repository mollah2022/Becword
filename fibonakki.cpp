#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x1=0,x2=1,x3;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<x1<<" ";
			continue;
		}
		if(i==2)
		{
			cout<<x2<<" ";
			continue;
		}
		x3=x1+x2;
		x1=x2;
		x2=x3;
		cout<<x3<<" ";
	}
	return 0;
}