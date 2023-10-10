                                                                                   //9.10.23
/*1. Create an abstract class named Shape with a pure virtual function 
named area(). This class has two functions named set_height(int I) and 
set_width(int j) to set the values for width and height. This abstract class
is inherited by two classes Rectangle and Triangle.They will use the area() 
function to calculate their corresponding height and width by using 
respective rules.*/

#include<iostream>
using namespace std;

class Shape {      //(abstract class)This class is an abstract class because it contains a pure virtual function area()
public:
    int height,width;

    void setheight(int i){
        height=i;
    }

    void setwidth(int j){
        width=j;
    }

    virtual void area()=0;//pure virtual function


};

class Rectangle : virtual public Shape{
   public:
       virtual void area(){

       cout<<"Rectangle Area: "<<height*width<<endl;

       }
};

class Triangle : virtual public  Shape {
  public:
      virtual void area(){


      cout<<"Triangle Area: "<<0.5*height*width<<endl;

      }

};


int main(){

Rectangle *p=new Rectangle ();
p->setheight(50);
p->setwidth(10);
p-> area();

Triangle *k=new Triangle ();
k->setheight(5);
k->setwidth(4);
k-> area();



return 0;

}


/*
2. Design a class named Flower. Flower will have only one function showItem( 
which will output what it sells. Create two derived classes, Rose and Marigold. 
Rose will define showItem so that it will output "sells rose" and similarly
Marigold will output "sells marigold". In the main() function, use the Flower 
class in a way that implements the idea of abstraction.*/

#include<iostream>
using namespace std;

class Flower{
public:
    virtual void ShowItem()=0;

};

class Rose:virtual public Flower{
public:
    virtual void ShowItem(){

        cout<<"Sell rose"<<endl;

    }

};

class Marigold:virtual public Flower {
public:
    virtual void ShowItem(){

        cout<<"Sell marigold"<<endl;
    }
};

int main(){

    Flower *p=new Rose();
    p->ShowItem();

    Flower *k=new Marigold();
    k->ShowItem();

    return 0;
}

/* 3. Consider an abstract class named multiply with its constructor which will set the values
for m and n. It has a virtual function named sum().Consideranother class Result which is inherited 
from multiply class and by using the constructor of Result class it will show the result of m+n.*/

#include<iostream>
using namespace std;
class multiply
{
public:
    int m,n;

    multiply(int i,int j)
    {
        m=i;
        n=j;

    }
    virtual void sum()=0;
};
class result:virtual public multiply
{
public:
    result(int k,int h):multiply(k,h)
    {
        cout<<m+n;
    }
    virtual void sum(){

    }

};
int main()
{
    result ob(5,15);

    return 0;
}
