#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,i;
	cin >> x;
	long long int s1[x];
	s1[1]=0;
	s1[2]=1;
	for( i=3;i<=x;i++)
	{
		s1[i]=s1[i-1]+s1[i-2];
	}
	cout<<s1[x];
	return 0;
}