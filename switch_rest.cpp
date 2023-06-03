#include<iostream>
using namespace std;
int main()
{
	int order,bill,amount,totalamt,choice;
	cout<<"enter your choice:: \n1.vegiterian\n2.nonvegiterian";
	int fastfood=400,gujaratithali=500,panjabithali=800;
	int tanduri=200, masalapaneer=300, friedrice=400;
	int budget=1000;
	cin>>choice;
	
	cout<<"select your order::\n 1.fastfood\n2.gujaratithali\n3.panjabithali";
	cin>>order;
	if(choice==1){
		
		
		switch(order){
			case 1:
				cout<<"fastfood order::"<<fastfood;
				budget-=fastfood;
				cout<<"remaining amount"<<budget;
				break;
			case 2:	
			    cout<<"gujaratithali order::"<<gujaratithali;
			    budget-=gujaratithali;
			    cout<<"remaining amount"<<budget;
			    break;
			case 3:	
			    cout<<"panjabithali order::"<<panjabithali;
			    budget-=panjabithali;
			    cout<<"remaining amount"<<budget;
			    break;
			    
			}
		}
		else{
			switch(order){
				case 1:
				cout<<"tanduri order::"<<fastfood;
				budget-=fastfood;
				cout<<"remaining amount"<<budget;
				break;
				
			}
			
			
		}	
		
		
		
		
	}
	
