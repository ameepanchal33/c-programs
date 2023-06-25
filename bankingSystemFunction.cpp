#include<iostream>
using namespace std;
float deposite(float amount){
	int balance=40000;
   	balance+=amount;
   	 cout<<"balance:"<<balance;
   	
}
 
float withdraw(float amount) {
	float balance=40000;
	balance-=amount;
	cout<<"balance:"<<balance;
}

float totalBalance(){
	int balnce=40000;
	cout<<balnce;
}

int main()
{   
    float amount;
    int ch;

	
	
	cout<<"1.for deposite \n 2.for withdraw \n 3.for balance\n";
	cout<<"enter your choic:";
	cin>>ch;
	switch(ch){
		case 1:
		cout<<"enter your deposite amount:";
	    cin>>amount;
	   deposite(amount);
	   break;
	 
	    case 2:
	    cout<<"enter your deposite amount:";
	    cin>>amount;
	    withdraw(amount);
	    break;
	    
	    case 3:
	   	totalBalance();
	   	cout<<"your balnce:";
	   	break;
	    
		
	}
}
