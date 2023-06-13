#include<iostream>
using namespace std;
int main ()
{
	int i,j,a[100],sum=0,el;
	float mean;
	cout<<"enter your arry element:";
	
	cin>>el;
	for(i=1;i<=el;i++){
	    
			cin>>a[i];
	        
		    sum+=a[i];
	}
	cout<<"sum"<<sum<<endl;
	mean=(float)sum/el;
	cout<<"mean:"<<mean;
	
	
}
