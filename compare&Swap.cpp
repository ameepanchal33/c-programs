#include<iostream>
using namespace std;
int main(){
	string s1="Amee";
	string s2="prerna";
	
	int x=s1.compare(s2);
	cout<<x;
	if(x==0){
		cout<<"s1==s2"<<"\n";
	}
	else if(x>0){
		cout<<"s1>s2"<<"\n";
	}
//	int a=s1.compare(0,2,s2,0,2);
//	int b=s2.compare(0,2,s1,0,2);

cout<<s1<<endl;
cout<<s2<<endl;
cout<<"after swapping:";
s1.swap(s2);
cout<<s1<<endl;
cout<<s2<<endl;

	
	
}
