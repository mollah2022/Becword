#include<iostream>
using namespace std;
class student
{
    int x;
public:
    void setx(int k)
    {
        x=k;
    }
    void getx()
    {
        cout<<x<<endl;
    }

};
class student_1:public student
{
    int y;
public:
    void sety(int p)
    {
        y=p;
    }
    void gety()
    {
        cout<<y<<endl;
    }
};
int main()
{
    student_1 ob1;
    ob1.setx(10);
    ob1.getx();
    ob1.sety(30);
    ob1.gety();
    return 0;

}
