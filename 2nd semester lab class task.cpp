/*1. Create a base class Shape with attributes width and height. Derive classes Rectangle and Triangl
from Shapeto represent specific shapes. Include member functions to calculate area for each shape. */

#include<iostream>
using namespace std;
class Shape{
public:
double width,hight;
void input (){

cin>>width>>hight;

}

};
class Rectangle :public Shape{
public:
void area1(){
int area_of_rectangle=width*hight;
cout<<"Area of rectangle:"<<area_of_rectangle<<endl;

}

};
class Triangle :public Shape{
public:
void area2(){
int area_of_triangle=0.5*width*hight;
cout<<"Area of triangle:"<<area_of_triangle<<endl;
}
};


int main(){

Rectangle ob2;
Triangle ob3;
ob2.input();
ob2.area1();
ob3.input();
ob3.area2();

return 0;

}





/*2.Create a base class Person with attributes name and age.Derive class Student from Person with additional 
attribute like studentID. Now use a friend function of Student class to print name,age and ID. */

#include<iostream>
using namespace std;
class Person{
public:
int age;
string name;

};
class student :public Person{
public:
    int StudentID;
    void input(){
    cin>>name>>age>>StudentID;
    }

    void friend show(student ob);
};
void show(student ob){

cout<<ob.name<<ob.age<<ob.StudentID<<endl;
}
int main(){
student o;
o.input();
show(o);

}





/*3.Create a base class Vehicle with attributes model and year. Create another class Property which
has additionalattributes like color and weight. Then derive two classes car and truck which will inherit
both Vehicle and Property class and show all the values of their own.*/

#include<iostream>
using namespace std;
class Vehicle{
public:
    string model;
    int year;
void input1(){
cin>>model>>year;
}
};
class Property{
public:

string colour;
int weight;
void input2(){
cin>>colour>>weight;
}
};
class car:public Vehicle,public Property{
public:
void input1(){

cin>>model>>year>>colour>>weight;
}

void show1(){
    cout<<"Car class"<<endl;
    cout<<model<<year<<colour<<weight<<endl;



};
class truck:public Vehicle,public Property{

public:
void input1(){

cin>>model>>year>>colour>>weight;
}

void show2(){
    cout<<"Truck class"<<endl;
    cout<<model<<year<<colour<<weight<<endl;


}
};
int main(){
car ob1;
truck ob2;
ob1.input1();
ob1.show1();
ob2.input1();
ob2.show2();

}





/*4.Create a class Person with attributes name and age. Derive a class Employee with an
additional attribute employeeID. Derive another class Manager from Employee with an 
additional attribute department. Now create data for multiple employee using object array.*/

#include<iostream>
using namespace std;
class person{
public:
    int age;
     string name;
};
class employee:public person{
public:
    int employeeid;

} ;
class manager:public employee{
public:
string dept;
void input(){
cin>>name>>age>>employeeid>>dept;

}
void show(){

cout<<name<<""<<age<<""<<employeeid<<""<<dept<<endl;

}
};

int main(){
manager ob[5];
for(int i=0;i<5;i++){
    ob[i].input();
}
for(int i=0;i<5;i++){
    ob[i].show();
}

return 0;
}


