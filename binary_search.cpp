#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,found=0;
	cin >> x >> y;
    int search;
	int s1[x];

	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}
	for(int j=0;j<y;j++)
	{
		cin >> search;
	}
	int mid=0,left=0,right=x-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(s1[mid]==search)
		{
			cout<<"found\n";
			found=1;
			return 0;
		}
		else if(s1[mid]<left)
		{
			mid=left+1;
		}
		else
		{
			mid=right-1;
		}
	}
	if(found==0)
	{
		cout<<"not found\n";
	}
	found=1;
	return 0;
}