#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		cin>>s1;
		int k=s1.size();
		if(k==5)
		{
			cout<<3<<endl;
		}
		else if((s1[0]=='t'&&s1[1]=='w')||(s1[2]=='o'&&s1[1]=='w')||(s1[0]=='t'&&s1[2]=='o'))
		{
			cout<<2<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
	return 0;
}