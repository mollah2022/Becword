#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int x,y,sum=0,i,j,max=0,mini=0;
  while(cin>>x>>y)
  {
 
  if(x<=0 || y<=0)
  {
  	continue;
  }
if(x>=y)
{
	max=x;
	mini=y;
}
else
{
	max=y;
	mini=x;
}
for(j=mini;j<=max;j++)
{
	cout<<j<<" ";
	sum+=j;
}
cout<<"sum ="<<sum<<endl;
sum=0;
}
return 0;

}