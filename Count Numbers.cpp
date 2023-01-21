#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		int s[100];
		for(int i=0;i<100;i++)
		{
			cin>>s[i];
			count++;

		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}