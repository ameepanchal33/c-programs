#include<iostream>
using namespace std;
int main()
{
	string s1="ABC";
	string s2="XYZ";
	string s3=s1+s2;
	if(s1!=s2){
		cout<<"s1 is not equal to s2"<<endl;
		
	}
	if(s1>s2){
		cout<<"s1 is greater than s2"<<endl;
	}
	if(s3==s1+s2){
		cout<<"s3 is equal to s1 & s2"<<endl;
	}
}
