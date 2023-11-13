/*1. Implement the following concept using operator overloding :                                        Date: 13.11.23

int main(){

A ob1,ob2,ob3,ob4;
ob1=(ob2*10)+ob2;

}

where A is the class name.Design the ccode toi find the output for the above operation between object.

*/
#include<iostream>
using namespace std;
class A
{
public:
    int number;
   void input()
   {
       cin>>number;
   }
   A operator*()
   {
       A o;
       o.number=number*10;
       return o;
   }
    A operator*(int)
   {
       A o;
       o.number=this->number*10;
       return o;
   }
   A operator+(A&ob)
   {
       A o;
       o.number=this->number+ob.number;
       return o;
   }
   void output()
   {
       cout<<number<<endl;
   }

};
int main()
{
    A ob1,ob2,ob3,ob4;
    ob2.input();
    ob3.input();
    ob4=ob1+ob3;
    ob4.output();
}


2.   
    
    #include<iostream>
    using namespace std;
    class Person
    {
    public:
        string name;

        int age;

        virtual void display()
        {

        }



    }  ;
    class Student:virtual public Person
    {
    public:

        virtual void display()
        {

        }



    }  ;
    class Faculty:virtual public Person
    {
    public:

        virtual void display()
        {

        }



    }  ;
    class TA:virtual public Student,virtual public Faculty
    {
    public:

        virtual void display()
        {
            cin>>name;
            cin>>age;
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;

        }



    }  ;
    int main()
    {

        TA*p=new TA();
        p-> display();


    }


/*3.Write a programm to add three values.The value can be integer ,floting 
point number or string .You can write one function to implement this.

*/
  #include<iostream>
using namespace std;
template<typename T>
T sum(T x,T y,T z){

return x+y+z;

}

int main(){
 cout<<sum<int>(5,5,5)<<endl;
 cout<<sum<float>(5.5,5.6,5.7)<<endl;
 cout<<sum<string>("S","H","A")<<endl;


}

