#include<iostream>
using namespace std;
int main(){
	string s1="1289493";
	string s2="Hellofriends";
	cout<<"original string:\n";
	cout<<"s1:"<<s1<<"\n";
	cout<<"s2:"<<s2<<"\n";
	//Insert String to another;
	s1.insert(3,s2);
	cout<<"Modified s1:"<<s1<<"\n";
	
	s1.erase(4,5);
	cout<<"now s1::"<<s1<<"\n";
	
	s1.replace(2,2,s1);
	cout<<"now s2::"<<s2<<"\n";
	

	
}
