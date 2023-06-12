#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your age";
	cin>>age;
	if(age<18){
		goto ineligible;
	}
	else{
		cout<<"eligible";
	}
	ineligible:
		cout<<"you are not eligible";
}
