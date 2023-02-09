#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long  n,y,sum=0,count=0,i,found=0;
  cin >> n >> y;
 long long   s1[n];
  for( i=0;i<n;i++)
  {
           cin >> s1[i];
  }
     sort(s1,s1+n,greater<long long>());
  for( i=0;i<n;i++)
  {
            sum+=s1[i];
            count++;
            if(sum>=y)
            {
              found=1;
              break;
            }
  }
  if(found==1)
  {
    cout<<count<<endl;
  }
  else
  {
    cout<<"Shombhob na\n";
  }
  return 0;
}