#include<iostream>
using namespace std;
int area(int l){
	cout<<"square area:"<<(l*4);
}
int area(int l,int b){
	cout<<"rectangle area:"<<(l*b);
	}
float area(float r,float pi){
	cout<<"circle:"<<(pi*r*r);
}
int main(){
	area(4);
	cout<<endl;
	
	area(4,5);
	cout<<endl;
	area(4.5f,3.14f);
	
}
