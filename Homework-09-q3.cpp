#include<iostream>
using namespace std;

int main(){
	double *d_var2=new double[10];
	
	
	for(int i=0;i<10;i++){
		cout<<"Values of 10 double-precision floating-point variable "<<i+1<<" :";
		cin>>d_var2[i];
		}
	
	delete[] d_var2;
}
