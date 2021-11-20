#include<iostream>
using namespace std;

int main(){
	int element;
	cout<<"Test data "<<endl;
	cout<<"Input total number of elements(1 to 100):";
	cin>>element;
	
	double *ptr=new double[element];
	for(int i=0;i<element;i++){
		cin>>ptr[i];
	}
	int max=ptr[0];
	for(int i=0;i<element;i++){
		if(ptr[i]>max){
			max=ptr[i];
		}
	}
	
	cout<<"The Largest element is "<<max;
}
