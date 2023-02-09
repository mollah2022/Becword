#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int s1[x];
	for(int i=1;i<=x;i++)
	{
		cin >> s1[i];
	}
	int max=s1[1];
	for(int i=1;i<=x;i++)
	{
		if(s1[i]>max)
		{
			max=s1[i];
		}
	}
	int s2[100];
	for(int i=1;i<=max;i++)
	{
		if(max%i==0)
		{
			s2[i]=i;
		}
	}
	for(int i=1;i<=4;i++)
	{
		cout<<s2[i]<<" ";
	}
	
	cout<<endl;
	return 0;

}