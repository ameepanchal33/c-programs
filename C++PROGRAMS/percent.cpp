#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,i;
	    
        	int guj,eng,hindi,maths;
        	int total,avg,percentage;
             	cout<<"\nenter the marks :";
	            cin>>guj>>eng>>hindi>>maths;
               	total=guj+eng+hindi+maths;
               	cout<<total;
               	cout<<"\n";
                    avg=total/4;
                    cout<<"avg is:";
                    cout<<avg;
                    cout<<"\n";
                if(avg>40 && avg<60)
                {
                	cout<<"C grade";
				}
                else if(avg>60 && avg<=70)
                {
                	cout<<"B grade";
				}
				else if(avg>70 && avg<=90)
                {
                	cout<<"A grade";
				}
				else if(avg>90)
                {
                	cout<<"A grade";
				}
				else{
					cout<<"fail";
				}
				
       
	
}
