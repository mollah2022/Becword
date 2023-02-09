#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int s1[x];

	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}
	int max=s1[0];
	int min=s1[0];
	for(int i=0;i<x;i++)
	{
		if(s1[i]>max)
		{
			max=s1[i];
		}
	}
		for(int i=0;i<x;i++)
	{
		if(s1[i]<min)
		{
			min=s1[i];
		}
	}
	
	for(int i=0;i<x;i++)
	{
		if(s1[i]==max)
		{
			cout<<min<<" ";
		}
		else if(s1[i]==min)
		{
			cout<<max<<" ";
		}
		else
		{
			cout<<s1[i]<<" ";
		}
	}
	return 0;
}