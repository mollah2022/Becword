#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int sum=0;
    sum=24-abs(x-y);
    if(x>y)
    {
    cout<<"O JOGO DUROU"<<" "<<sum<<" "<<"HORA(S)\n";
    }
    else if(y>x)
    {
        cout<<"O JOGO DUROU"<<" "<<abs(x-y)<<" "<<"HORA(S)\n";

    }
    else
    {
        cout<<"O JOGO DUROU"<<" "<<"24"<<" "<<"HORA(S)\n";
    }
    return 0;
}
