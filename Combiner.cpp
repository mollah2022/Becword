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
		string s3;
		cin>>s1>>s2;
		int k= s1.size()-1;
		for(int i=0,j=0;i<k;i++,j++)
		{
			 s3[i+j]=s1[i]+s2[j];
		}
		cout<<s3<<endl;
	}
	return 0;
}