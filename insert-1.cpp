#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int s1[x];
	int i,pos,num;
	cin >> pos >> num;

	for( i=0;i<x;i++)
	{
		cin >> s1[i];
	}
	for(i=x;i>=pos;i--)
	{
		s1[i]=s1[i-1];
		s1[i]=num;
	}
	for(int i=0;i<=x;i++)
	{
		cout<<s1[i]<<" ";
	}
	return 0;
}