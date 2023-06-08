#include<iostream>
using namespace std;
int main()
{
	int ch,q,amount;
	int s=250;
	int me=500;
	int l=800;
	int m=1000;
	cout<<"choice pizza size:";

	cout<<"1.small\n 2.mediuam \n3.large\n 4.monster\n enter your choice:";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"enter your quantity::";
			cin>>q;
			
			if(q>=4){
				cout<<"500ml coke free";
				cout<<"\n";
			 }
			 
			 		amount=s*q;
			        cout<<"your total amount of bill::"<<amount;
			        break;
		
		case 2:
			cout<<"enter your quantity::";
			cin>>q;
			
		    if(q>=3){
				cout<<"500ml coke free";
				cout<<"\n";
			 }
			 
			 		amount=s*q;
			        cout<<"your total amount of bill::"<<amount;
			        break;
			 
	  	case 3:
			cout<<"enter your quantity::";
			cin>>q;
			
			if(q>=4){
				cout<<"500ml coke free";
				cout<<"\n";
			 }
			 
			 		amount=s*q;
			        cout<<"your total amount of bill::"<<amount;
			        break;   
		case 4:
			cout<<"enter your quantity::";
			cin>>q;
			
			if(q>=8){
				cout<<"500ml coke free";
				cout<<"browniee";
				cout<<"\n";
			 }
			 
			 		amount=s*q;
			        cout<<"your total amount of bill::"<<amount;
			        break;	
    }
}

