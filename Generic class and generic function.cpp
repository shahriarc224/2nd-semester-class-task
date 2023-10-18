/*                                                                                                                          18.10.23

*/


#include <bits/stdc++.h>
using namespace std;
template <class N, class O, class P>
class A
{
public:
    N a;
    O c;
    P  b;
    A()
    {
        cout<<"Enter number oparetor number(10-5): ";
        cin>>a>>c>>b;
        if (c=='+')
        {
            cout<<a+b<<endl;
        }
        else if (c=='-')
        {
            cout<<a-b<<endl;
        }
        else if (c=='*')
        {
            cout<<a*b<<endl;
        }
        else if (c=='/')
        {
            cout<<a/b<<endl;
        }
        else if (c=='%')
        {
            cout<<a%b<<endl;
        }
        else
        {
            cout<<"Enter correct oparetor!"<<endl;
        }
    }
};
int main()
{
    while (1)
    {
        A<int,char,int>ob;
    }
}

/*
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

*/


#include <bits/stdc++.h>
using namespace std;
template <class N, class O, class P>
class A
{
public:
    N a;
    O c;
    P  b;
    A(N x, O y, P z):a(x),c(y),b(z)
    {
        if (c=='+')
        {
            cout<<a+b<<endl;
        }
        else if (c=='-')
        {
            cout<<a-b<<endl;
        }
        else if (c=='*')
        {
            cout<<a*b<<endl;
        }
        else if (c=='/')
        {
            cout<<a/b<<endl;
        }
        else if (c=='%')
        {
            cout<<a%b<<endl;
        }
        else
        {
            cout<<"Enter correct oparetor!"<<endl;
        }
    }
};
int main()
{
    int x,z;
    char y;
    while (1)
    {
        cout<<"Enter number oparetor number(10-5): ";
        cin>>x>>y>>z;
        A<int,char,int>ob(x,y,z);
    }
}









