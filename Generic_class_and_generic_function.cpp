/*                                                                                                                          18.10.23
hrdtst
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



//Generic Function :

1.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
T add(T a,T b)
{
	return (a+b);
    
}


int main(){

cout<<add<int>(3,7)<<endl;
cout<<add<float>(3.3,6.6)<<endl;
}

//Alternative 

2.

#include<bits/stdc++.h>
using namespace std;

template <typename T>
void add(T a,T b)
{
	cout<<a+b<<endl;
    
}


int main(){

add<int>(3,7);
add<float>(3.3,6.6);
}



3.

#include<bits/stdc++.h>
using namespace std;

template < typename T > 
 void func (T a, T b, T c)
{
  if (a > b && a > c)
	{
  	cout << "a";
	}
  else if (b > c && b > a)
	{
  	cout << "b";
	}
  else
	{
  	cout << "c";
	}

}


int
main ()
{

  func < int >(5, 6, 7);

}


4.

#include<bits/stdc++.h>
using namespace std;

template<typename J>
void add(J d){

J a,b,c;
cin>>a>>b>>c;
J sum=(a+b+c)/d;

cout<<"sum: "<<sum<<endl;
}

int main(){
    
add<float>(3);
    
}




5.
#include<bits/stdc++.h>
using namespace std;

template <typename T,typename U>
T add(T a,T b){

if(a>b){

    return a;

}else{
   return b;

  }
}
int main(){

cout<<add<float ,float >(3.6,6.5)<<endl;


}








6.

#include<bits/stdc++.h>
using namespace std;

template <typename T,typename U>
T add(T a,U b){

if(a>b){

	return a;

}else{
   return b;

  }
}
int main(){

cout<<add<float,int >(3.6,2)<<endl;


}






7.

#include<bits/stdc++.h>
using namespace std;

template<typename T>

void add(T ar[],T m)
{
  T sum=0;
  int  j;
  for(j=0;j<m;j++){

    sum=sum+ar[j];

  }
  cout<<sum<<endl;


}


int main(){

    float arr[5];
    int i;

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

 add<float>(arr,i);

}


//Generic Class:
1.
#include<bits/stdc++.h>
using namespace std;

class data
{
public:
    int a,b;
    data()
    {
        cin>>a>>b;

    }

    void add()
    {
        cout<<a+b;
    }
};

template <class T>

void show(T ob)
{
    ob.add();

}


int main(){

data o;
show(o);


}



2.

#include<bits/stdc++.h>
using namespace std;

template<class t,class u>
class A
{
public:
	t a;
	u p;
	A(t q,u w)
	{
    	a=q;
    	p=w;
    	cout<<"A:"<<a<<" "<<"B:"<<p<<endl;
	}
};

int main()
{

	A<int,float>ob(5,3.3);


}









