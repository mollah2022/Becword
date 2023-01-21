#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number,s1,s2,sum=0,i;
	cin>>number>>s1>>s2;
	for(i=1;i<=number;i++)
	{
		if(i/10==0)
		{
			if(i>=s1 && s2>=i)
			{
				sum+=i;
			}
		}
		else
		{
			int number1,sum1=0,digit;
			number1=i;
			while(number)
			{
				digit=number1%10;
				sum1+=digit;
				number1=number1/10;

			}
			if(sum1>=s1 && s2>=sum1)
			sum+=i;
		}
	}
	cout<<sum<<endl;
	return 0;
}