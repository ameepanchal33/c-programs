#include<iostream>
using namespace std;
int main()
{
	int ligin,withdrawal,deposite,ch;
	int amt,amount=40000;
	long int password;
	cout<<"enter your choice 1.login\n 2.withdrawal\n 3.deposite";
	cout<<"\n";
	cin>>ch;
	
	switch(ch){
		case 1:
			cout<<"enter your email::";
			cin>>password;
			break;
		case 2:
		    cout<<"enter your amount::";
			cin>>amt;
			amount-=amt;
			cout<<"current balence::"<<amount;
			break;
		case 3:
			cout<<"enter your deposite::";
			cin>>amt;
			amount+=amt;
			cout<<"updated balence::"<<amount;
			break;
			
		}
		return 0;
	
}
