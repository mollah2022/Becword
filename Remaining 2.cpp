#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int i;
    for(i=1;i<10000;i++)
    {
        if(i%x==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
