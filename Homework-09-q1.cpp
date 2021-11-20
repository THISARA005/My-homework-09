/*
	Name: B.A Thisara Dilshan
	IM Num: IM/2019/005
	Date: 17/10/21 20:27
	Description: HOMEWORK-09
*/
#include<iostream>
using namespace std;

int main(){
	
	cout<<"input double-precision floating-point variable :";
	double *d_var=new double(45.5);
	cout<<*d_var<<endl;
	
	cout<<"\nAddress of double-precision floating-point variable :"<<d_var<<endl<<endl;
	

//print create an array of 10 double-precision floating-point values and store its address in d_array.

	double *d_array2=new double[10];	

	cout<<"\nAddress of 10 double-precision floating-point variable :"<<d_array2<<endl;

	
}
