#include<iostream>
using namespace std;
int main()
{
	int i=1,j=1,y;
	do{//row printing
		//cout<<i*j;
		j=1;
	   do{// for column
	   	y=i*j;
	   	 	cout<<y<<"\t";
	   	    j++;
	     }while(j<=10);
		cout<<endl;
		i++;   
	   
	}while(i<=10);
	
	

}

