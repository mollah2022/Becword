#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	for(int i=1;i<=l;i++)
	{
		int n1,n2,n3,l=0,mid=0,hi=0;
		cin>>n1>>n2>>n3;
		if(n1<=n2 && n1<=n3)
		{
			l=n1;
			if(n2<=n3)
			{
				mid=n2;
				hi=n3;
			}
			else
			{
				mid=n3;
				hi=n2;
			}

		}
		else if(n2<=n1 && n2<=n3)
		{
			l=n2;
	        if(n1<=n3)
			{
				mid=n1;
				hi=n3;
			}
			else
			{
				mid=n1;
				hi=n3;
			}
		}
		else
		{
			l=n3;
			if(n2<=n1)
			{
				mid=n2;
				hi=n1;
			}
			else
			{
				mid=n1;
				hi=n2;
			}
		}
		cout<<"Case "<<i<<": "<<l<<" "<<mid<<" "<<hi<<endl;
	}
	return 0;
}