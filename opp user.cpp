#include<iostream>
using namespace std;

class student
{
    int x;
public:
    void setx(int k)
    {
        cin>>x;
    }
    void getx()
    {
        cout<<x<<endl;
    }
};
class result:public student
{
    int y;
public:
    void sety(int l)
    {
        cin>>y;
    }
    void gety()
    {
        cout<<y<<endl;
    }
};
int main()
{
    result ob1;
    return 0;

}
