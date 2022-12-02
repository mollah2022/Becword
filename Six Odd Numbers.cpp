#include<iostream>
using namespace std;
int main()
{
    int x,k=0;
    cin>>x;
    for(int i=x;i<1000;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            k++;
        }
        if(k==6)
        {
            break;
        }
    }
    return 0;
}
