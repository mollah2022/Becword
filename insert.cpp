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
	int j,temp=0;
	for(int i=1;i<x;i++)
	{
		temp=s1[i];
		j=i-1;
		while(j>=0 && s1[j]>temp)
		{
			s1[j+1]=s1[j];
			j--;
		}
		s1[j+1]=temp;
	}
	for(int i=0;i<x;i++)
	{
		cout<<s1[i]<<" ";
	}
	return 0;
}