#include<iostream>
using namespace std;
int main()
{
	int ch,q,amount,i;
	int s=250;
	int me=500;
	int l=800;
	int m=1000;
	
	int coc=0,ice_cream=0,brownii=0;
	cout<<"choice pizza size:"<<endl;

	cout<<"1.small\n 2.mediuam \n3.large\n 4.monster\n enter your choice:";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<endl<<"enter your quantity::";
			cin>>q;
			
			if(q>=4)
			{
				for(i=q;i>0;i--)
				{
					if(i%4==0)
					{
						coc++;
					}
					
					
				}
			}
			amount=s*q;
			cout<<"total amount "<<amount<<endl;
			cout<<"free coc "<<coc;
			break;
		
		case 2:
			cout<<"enter your quantity::";
			cin>>q;
			
		    if(q>=3){
		    	
		    	for(i=q;i>0;i--){
		    		if(i%3==0){
		    			coc++;
		    			ice_cream++;
		    			
					}
				
				}
			
			 
			 		amount=s*q;
			        cout<<"your total amount of bill::"<<amount<<endl;
			        cout<<"free coc"<<coc<<endl;
					cout<<"free ice_cream"<<endl;
			        break;
			 
	  	case 3:
			cout<<"enter your quantity::";
			cin>>q;
			
			if(q>=4){
				cout<<"500ml coke free";
				cout<<"\n";
			 }
			 
			 		amount=s*q;
			        cout<<"your total amount of bill::"<<amount<<endl;
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
}
