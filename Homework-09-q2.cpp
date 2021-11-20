#include<iostream>
using namespace std;

int main(){
	double input;
	cin>>input;
	cout<<"input double-precision floating-point variable :";
	double *d_var=new double(input);	
	cout<<*d_var<<endl<<endl;
	
}
