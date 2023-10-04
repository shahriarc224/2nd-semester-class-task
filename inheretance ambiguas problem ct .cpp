#include<iostream>
using namespace std;

class shape
{
public:
    int height, width;
    void area()
    {
    }
};
class rectangle1: virtual public shape
{
public:
    int sum1, height, width;
     void area()
    {
        cin>>height >> width;
        sum1=height* width;

    }
};
class rectangle2: virtual public shape
{
public:
    int sum2, height, width;
     void area()
    {
        cin>>height >> width;
         sum2=height* width;

    }
};
class calarea:virtual public rectangle1,virtual public rectangle2
{
public:
     void area()
    {
        if(sum1>sum2)
        {
            cout<<"rectangle 1 is big";
        }
        else
        {
            cout<<"rectangle 2 is big";
        }
    }
};
int main()
{
    calarea *p=new calarea();
    p->rectangle1::area();

    p->rectangle2::area();

    p->area();


}
