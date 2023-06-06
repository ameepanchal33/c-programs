#include<iostream>
using namespace std;
int main()
{
	int num1,num2,i;
	cout<<"enter the num1 and num2::";
	cin>>num1>>num2;
	cout<<"\n";
	int hcf=1;
	for(i=1;i<=num1 || i<=num2;i++){
		if(num1%i==0 && num2%i==0)
			hcf==i;
			
		
	
	}
		cout<<"hcf of this number::"<<hcf;
		
}
