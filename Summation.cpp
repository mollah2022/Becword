#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		int temp=0,rev=0,rem=0;
		cin>>x;
		temp=x;
		while(temp>0)
		{
			rem=temp%10;
			rev=rem*10+temp;
			temp=temp/10;

		}
		int l=x%10;
		int u=rev%10;
		cout<<"Sum = "<<(l+u)<<endl;

	}
	return 0;
}