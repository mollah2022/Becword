#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,found=0,mid=0,left=0;
	cin >> x >> y;
	int s1[x],s2[y],right=x-1;
	for(int i = 0;i < x ;i++)
	{
		cin >> s1[i];
	}
	for(int j = 0;j < y;j++)
	{
		cin >> s2[j];
	}

	for(int j = 0;j < y;j++)
	{
		while(left<=right)
		{
			mid=(left+right)/2;
			if(s1[mid]==s2[j])
			{
				found=1;
				break;
			}
			else if(s1[mid]<s2[j])
			{
				mid=left+1;
			}
			else
			{
				mid=right-1;
			}
		}
		
		if(found==1)
		{
			cout<<"found\n";
		}
		else
		{
			cout<<"not found\n";
		}
		found=0;
	}
		
	
	return 0;
	
}