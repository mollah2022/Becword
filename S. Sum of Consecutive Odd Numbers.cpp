#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int x,y,sum=0,i;
	cin>>x>>y;
	int maxx=0,mini=0,sub=0;
	maxx=max(x,y);
	mini=min(x,y);
	sub=(maxx-mini);
   	for(i=mini+1;i<maxx;i++)
    	{
    		if(i%2!=0)
    		{
    			sum+=i;
    		}
    	}
      	cout<<sum<<endl;
        sum=0;
}
return 0;
}