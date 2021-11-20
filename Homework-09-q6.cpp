
#include<iostream>
#include<string.h>
using namespace std;


int *ltrfre(char s[]);
int main(){
	int *fre_ltrs;
	char *s=new char[100];
	fre_ltrs=new int[26];
	
//to read input string to order to find the frequency of each letter	
	cout<<"Enter string :";
	cin.getline(s,' ');

//call the function to find the occurrence of each alphabet.
	fre_ltrs=ltrfre(s);
	
//Display the count.
	cout<<"Frequency of all alphabets in the string is: "<<endl;
	
	for(int i=0;i<26;i++){
		
		//constraint to check if the letter appeared at least once in the string and so printing the frequency of its occurrence
		if(fre_ltrs[i]!=0){
			cout<<" "<<static_cast<char>(i+'a')<<" "<<fre_ltrs[i]<<endl;
		}
	}	
	 
}
//define the function to find occurrence of each letter in the input string
int *ltrfre(char s[]){
	int *oc_array=new int[26];

//define the function to find occurrence of each letter in the input string.
	int ltrcount;
	
//to store The Count of occurrences for each letter temporarily.
	for(int i=0;i<26;i++){
		ltrcount=0;
		for(int j=0;j<strlen(s);j++){
		
//compare in the ASCII values of each alphabet with every character from the string by converting it to lowercase
			if(int('a')+i==int(tolower(s[j]))){
				ltrcount++;
			}
		}
		oc_array[i]=ltrcount;
	}
	return oc_array;
}











































