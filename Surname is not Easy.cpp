#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,v=0,c=0;
	cin>>x;
	while(x--)
		{
			string s1;
			cin>>s1;
			for(int i=0;i<s1.size()-1;i++)
			{
				if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||
					s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
				{
					v++;
				}
				else
				{
					c++;
				}
			}
			if(c>=v)
			{
				cout<<s1<<" nao eh facil\n";
			}
			else
			{
				cout<<s1<<" eh facil\n";
			}
			c=0;
		}
			return 0;
}