//Exception handling

1.

#include<bits/stdc++.h>
using namespace std;

int main ()
{
  try{
	int n1, n2;
	cout << "Enter number1:";
	cin >> n1;

	cout << "Enter number2:";
	cin >> n2;

	if (n2 == 0) {

    throw -1;     	// if(n==0) then throw -1
    
  	}

	double r = (double) n1 / n2;

	cout << "Result:" << r;
  }

  catch (int x){	        /*catch -1 ,in this line we are using
              	         int x to receive -1 and int cz -1 is an integer */

	cout << "Divide by zero is not possible.";
  }

}


2.

#include<bits/stdc++.h>
using namespace std;

int main(){
int x;
cout<<"Enter a value:";
cin>>x;


try{

  cout<<"Inside try"<<endl;
  if(x<0){

	throw -1;
	cout<<"Throw block"<<endl;
  }


}
   catch(int x){

   cout<<"Exception occured"<<endl;

   }

cout<<"Finished";


}


3.

#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int x;
	cout<<"Enter a value:";
	cin>>x;


	try
	{

    	cout<<"Inside try"<<endl;
    	if(x<0)
    	{

        	throw 20;
        	cout<<"Throw block"<<endl;
    	}


	}
	catch(int m)
	{

    	cout<<m<<endl;

	}

	cout<<"Finished";

}








