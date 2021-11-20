#include<iostream>
using namespace std;

struct Timer{
		int hour;
		int minute;
	};
	
int main(){
	
	Timer *timeptr=new Timer();
	(*timeptr).hour=10;
	(*timeptr).minute=20;
	
	cout<<"Time is :"<<(*timeptr).hour<<" hrs and "<<(*timeptr).minute<<" minutes "<<endl;
	return 0;
}
