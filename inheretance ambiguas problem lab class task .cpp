#include<iostream>
using namespace std;

class shape
{
public:
  int width, height;
  float area;


};

class triangle:virtual public shape
{
public:
  float show ()
  {

    width = 10;
    height = 5;
    area = 0.5 * width * height;

    return area;

  }
};


class rectangle:virtual public shape
{
public:
  float show ()
  {

    width = 10;
    height = 10;
    area = width * height;

    return area;
  }
};


class compare:virtual public triangle, virtual public rectangle
{

public:
  void show (float areatri, float arearec)
  {

    if (areatri > arearec)
      {

	cout << "Triangle is  bigger";

      }
    else
      {

	cout << "Rectangle is bigger";

      }


  }
};


int main ()
{

  compare *p = new compare ();
  float areatri = p->triangle::show ();
  float arearec = p->rectangle::show ();
  p->show (areatri, arearec);

  return 0;
}
                                                                             //Date:2.10.23

/*QUESTION:Declare a class A that has two derieved class B and class C ,after that 
inherit clas B and C in class D.(ambiguas problem).All the classes will contain same 
function show().and in main function you will call all the function of that 
class A,B,C,D and show the output .*/

//ANSWER :
#include<iostream>
using namespace std;
class A
{
public:
    int a;
    virtual void show ()
    {
        a=10;
        cout<<a<<endl;


    }

};

class B:virtual public A
{
public:
    int b;
    virtual void show ()
    {
        a=5;
        cout<<a<<endl;
    }

};

class C:virtual public A
{
public:
    int a;
    virtual void show ()
    {
        a=15;
        cout<<a<<endl;

    }
};
class D: virtual public B,virtual public C
{
public:
    virtual void show ()
    {
        a=100;
        cout<<a<<endl;
    }
};

int main()
{
    D *p=new D;
    p->A::show();    //If i want to call a function which is inside class A//
    p->B::show();   //If i want to call a function which is inside class B//
    p->C::show();   //If i want to call a function which is inside class C//
    p->show();      /*If i want to call a function which is inside class D. We
                      have already made an pointer of class D thats why we are 
		  not going to write p->D  */

    return 0;
}

