#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            cout<<"NULL\n";
        }
     else  if(x>1)
       {
           if(x%2==0)
           {
               cout<<"EVEN POSITIVE\n";
           }
           else if(x%2!=0)
           {
               cout<<"ODD POSITIVE\n";
           }
       }
       else
       {
           if(x%2==0)
           {
               cout<<"EVEN NEGATIVE\n";
           }
           else if(x%2!=0)
           {
               cout<<"ODD NEGATIVE\n";
           }
       }
    }
    return 0;
}
