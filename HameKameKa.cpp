#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		string s2;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]=='k')
			{
				cout<<"k";
			}
			else if(s1[i]=='a')
			{
               s2[i]=s1[i];
			}
		}
		cout<<s2<<endl;
	}
	return 0;
}