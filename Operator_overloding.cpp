/*Operator overloding:
  1)Write a  C++ program that defines two classes, A and B, and uses
  them to calculate and compare the areas of two triangles.
*/

#include<iostream>
using namespace std;
class A
{
public:
    int b1,h1,b2,h2;
    float area1,area2;

    void input (){

       cin>>b1>>h1>>b2>>h2;
       area1=0.5*h1*b1;
       area2=0.5*h2*b2;

       cout<<"area 1:"<<area1<<endl<<"area 2:"<<area2<<endl;
    }
};

class B:public A{
  public:
      void compare(){

      if(area1>area2){

        cout<<"Triangle 1";


      }else{

      cout<<"Triangle 2";

      }
    }
};



int main(){

   B ob;
   ob.input();
   ob.compare();



return 0;
}


/*2)Write a  C++ program that defines three classes: account, withdraw, and eligible. The account class stores information about 
a bank account, the withdraw class is used to input the withdrawal amount, and the eligible class checks if a withdrawal is
eligible based on the account balance.
*/

#include<iostream>
using namespace std;

class account
{
 public:

     int id;
  float balance;
  string name;

     void input1(){
     cout<<"Name:";
     cin>>name;
     cout<<"ID:";
     cin>>id;

     cout<<"Balance:";
     cin>>balance;


     }
};


class withdraw{

public:
    int  amount;

    void input2(){
    cout<<"Amount:";
    cin>>amount;

    }

};


class eligible: public account, public withdraw{
  public:
      void comp(){
      if(balance>=amount){

        cout<<"You can withdraw.";

      }else{

      cout<<"You can not withdraw.";


      }
  }
};

int main(){

while (true){

    eligible ob;
    ob.input1();
    ob.input2();
    ob.comp();

    }
}


// 3)Write a  C++ program that defines three classes (A, B, and C) and calculates the difference between the sum of elements entered into three arrays.


#include<iostream>
using namespace std;

class A{
 public:
     int array[10];
     int sum1=0;
     void check1(){

     for(int i=0;i<10;i++){

        cin>>array[i];

        sum1=sum1+array[i];
       }

}


};


class B:public A{
 public:
     int array[10];
     int sum2=0;
     void check2(){

     for(int i=0;i<10;i++){

        cin>>array[i];

        sum2=sum2+array[i];
       }

}


};

class C:public B{

 public:
     int array[10];
     int sum3=0;
     void check3(){

     for(int i=0;i<10;i++){

        cin>>array[i];

        sum3=sum3+array[i];
       }
     int diff=sum3-(sum1*sum2);

     cout<<"Different: "<<diff<<endl;


    }
};


int main(){

C ob;
ob.check1();
ob.check2();
ob.check3();



return 0;
}







This code defines a class called ABC that represents a simple object with an integer attribute n and methods for inputting and outputting the value of n. It also defines an operator overload for + that allows two ABC objects to be added together. The main function of the program creates two ABC objects, inputs values for their n attributes, adds the objects together using the + operator, and outputs the result.

#include<bits/stdc++.h>
using namespace std;

class ABC{
public:
	int n;
	void input(int c){

	n=c;

	}

	void output(){

 	cout<<"N:"<<n;

	}

	ABC operator+(ABC & ob1){

	ABC o;
	o.n=this->n+ob1.n;

	return o;

	}


};

int main(){

ABC ob1,ob2,sum;

ob1.input(10);
ob2.input(20);

sum=ob1+ob2;

sum.output();
}

This code defines a class called ABC that represents a simple object with an integer attribute n and methods for inputting, outputting, and incrementing the value of n. It also defines two operator overloads for ++: the prefix increment (++ob1) and the postfix increment (ob1++). The prefix increment operator increments the value of n and returns a new ABC object with the updated value. The postfix increment operator increments the value of n, returns the original ABC object, and then updates the value of n in the original object. The main function of the program creates three ABC objects, inputs a value for the n attribute of the first object, increments the n attribute of the first object using both the prefix and postfix increment operators, and outputs the values of the n attributes of all three objects.



#include<bits/stdc++.h>
using namespace std;

class ABC{
public:
    int n;
    void input(int c){

    n=c;

    }

    void output(){

	 cout<<"N:"<<n<<endl;

    }

    ABC operator++(){  //(++)shamne
     ABC o;
     o.n=this->n+1;
     return o;
    }

    ABC operator++(int){	//(++)pichone
     ABC o;
     o.n=this->n+1;
     return o;
    }

};

int main(){

ABC ob1,ob2,ob3;

ob1.input(10);
ob2=++ob1;

ob2.output();
ob3=ob1++;
ob3.output();


}





/*
  4)Suppose you have two class named Box1 and Box2, which has three variables height,width and length. You have to
calculate the the area of these Box and compare them in a non-member operator function using object or operator overloading function.

*/


#include<iostream>
using namespace std;

class box2;

class box1 {
	int a, b, c, volume;

public:
	box1(int x, int y, int z) {
    	a = x;
    	b = y;
    	c = z;
    	volume = a * b * c;
	}


	friend int operator>(box1 ob1, box2 ob2);
};

class box2 {
	int c, d, e, volume2;

public:
	box2(int m, int n, int o) {
    	c = m;
    	d = n;
    	e = o;
    	volume2 = c * d * e;
	}

 

	friend int operator>(box1 ob1, box2 ob2);
};

int operator>(box1 ob1, box2 ob2) {
	if (ob1.volume > ob2.volume2) {
    	return 1;
	} else {
    	return 0;
	}
}

int main() {
	box1 ob1(1, 2, 30);
	box2 o1(4, 5, 6);

	if (ob1 > o1) {
    	cout << "box1";
	} else {
    	cout << "box2";
	}

	return 0;
}





//5)Write a Program to compare the sum of the Array object using object array and object overloading. Show the results.




#include<iostream>
using namespace std;

class Array {
	int *array;
	int size;

public:
	Array(int size) : size(size) {
    	array = new int[size];
	}

	~Array() {
    	delete[] array;
	}

	void setElement(int index, int value) {
    	array[index] = value;
	}

	int sum() {
    	int sum = 0;
    	for (int i = 0; i < size; i++) {
        	sum += array[i];
    	}
    	return sum;
	}

	friend int sum(Array &array1, Array &array2);
};

int sum(Array &array1, Array &array2) {
	return array1.sum() + array2.sum();
}

int main() {
	Array array1(5), array2(5);

	for (int i = 0; i < 5; i++) {
    	array1.setElement(i, i + 1);
    	array2.setElement(i, i + 6);
	}

	cout << "Sum of Array 1: " << array1.sum() << endl;
	cout << "Sum of Array 2: " << array2.sum() << endl;
	cout << "Sum of both Arrays: " << sum(array1, array2) << endl;

	return 0;
}

