#include<iostream>
using namespace std;
int main()
{
	int ch,op,q,price,total;
	cout<<"enter your choice.\n1.veg dish\n2.non-veg dish.";
	cout<<"\n";
	cin>>ch;
	switch(ch){
		case 1:
			
			cout<<"you choice veg dish.\n enter your choice.\n1.full dish\n2.fast-food\n3.panjabi thali.";
			cin>>op;
			switch(op){
				case 1:
					cout<<"your choice full dish.\n";
					cout<<"enter quantity:";
					cin>>q;
					price=110;
					total =price*q;
					cout<<"your total bill amount is :"<<total;
					break;
		        case 2:
		        	cout<<"your choice is fastfood :\n";
		        	cout<<"enter your quantity:";
		        	cin>>q;
		        	price=200;
		        	total=price*q;
		        	cout<<"your total bill amount is :"<<total;
		        	break;
		        case 3:
				
		        	cout<<"your choice panjabi thali :\n";
		        	cout<<"enter your quantity:";
		        	cin>>q;
		        	price=250;
		        	total=price*q;
		        	cout<<"your total bill amount is :"<<total;
		        	break;	
					
			}
				break;
		case 2:
		       cout<<"enter your nonveg choice \n1.biryani \n2.kabab\n3.friedpaneer";
			   cin>>op;
			   switch(op){
			   	case 1:
			   		cout<<"full dish biryani.\n";
			   		cout<<"enter your quantity::";
			   		price=180;
			   		cin>>q;
			   		total=price*q;
			   		cout<<"total bill amount is:"<<total;
			   		break;
			   	case 2:
			   		cout<<"full dish kabab.\n";
			   		cout<<"enter your quantity::";
			   		price=290;
			   		cin>>q;
			   		total=price*q;
			   		cout<<"total bill amount is:"<<total;
			   		break;
			   	case 3:
			   		cout<<"full dish friedrice.\n";
			   		cout<<"enter your quantity::";
			   		price=350;
			   		cin>>q;
			   		total=price*q;
			   		cout<<"total bill amount is:"<<total;
			   		break;	
			   	
			   	
			   	
			   }		
			
	}
}
