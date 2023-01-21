#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=0;
	string s1;
	cin>>s1;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=='1'&&s1[i+1]=='3')
		{
			k++;
			break;
		}
	}
	if(k==1)
	{
		cout<<s1<<" es de Mala Suerte\n";
	}
	else
	{
		cout<<s1<<" NO es de Mala Suerte\n";
	}
	return 0;
}