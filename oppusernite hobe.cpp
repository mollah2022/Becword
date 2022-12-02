#include<iostream>
using namespace std;

class student
{
    int x;
public:
    void setx()
    {
        cin>>x;
    }
    int getx()
    {
        cout<<x<<endl;
    }
};
class result:public student
{
    int y;
public:
    void sety()
    {

        cin>>y;
    }
    int gety()
    {
        cout<<y<<endl;
    }

};
int main()
{
    result ob1;
    ob1.setx();
    ob1.getx();
    ob1.sety();
    ob1.gety();
    return 0;

}
