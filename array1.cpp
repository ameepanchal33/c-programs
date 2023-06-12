#include<iostream>
using namespace std;
int main()
{
	int a[5],i,sum=0,avg;
	
	for(i=0;i<5;i++){
		cout<<"enter the arrray element";
		cin>>a[i];
		
	}
	for(i=0;i<5;i++){
		sum+=a[i];
	}
	cout<<"sum:"<<sum<<endl;
	avg=sum/5;
	cout<<"avg:"<<avg;
	
	
	
}
