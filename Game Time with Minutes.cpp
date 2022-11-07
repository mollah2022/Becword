#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int k=0,l=0,p=0;
    k=(x1*60)+y1;
    l=(x2*60)+y2;
    if(k>l)
    {
      p=3600-(k-l);
      cout<<"O JOGO DUROU"<<" "<<p/60<<" "<<"HORA(S) E"<<" "<<p%60<<" "<<"MINUTO(S)\n";
    }
    else if(k<l)
    {
        cout<<"O JOGO DUROU"<<" "<<(l-k)/60<<" "<<"HORA(S) E"<<" "<<(l-k)%60<<" "<<"MINUTO(S)\n";
    }
    else
    {
         cout<<"O JOGO DUROU"<<" "<<"24"<<" "<<"HORA(S) E"<<" "<<0 <<" "<<"MINUTO(S)\n";
    }
    return 0;
}
