#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int i,k=0;
	 for(int j=1;j<=x*4;j++)
	   {
	   	if(j%4==0)
	   	{
	   		cout<<"PUM"<<endl;
	   		continue;
	   	}
	   	cout<<j<<" ";
	 
	   }
	return 0;
}