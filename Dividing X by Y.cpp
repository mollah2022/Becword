#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,sum;
        cin>>x>>y;
        if(y!=0)
        {
           printf("%.1f\n", (float)x/(float)y);
        }
        else if(x==0)
        {
            cout<<"0."<<0<<endl;;
        }
        else
        {
            cout<<"divisao impossivel\n";
        }
    }
    return 0;
}
