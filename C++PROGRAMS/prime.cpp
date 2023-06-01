#include<iostream>
using namespace std;
int main()
{
	int num,i;
	bool is_prime=true;
	cout<<"enter any number:";
	cin>>num;
	if(num==0 || num==1){
		is_prime = false;
	}
	
	for(i=2;i<=num/2;++i)
	    {
	    	if(num%i==0){
	    		is_prime =false;
	    		break;
			}
		}
		if(is_prime)
		cout<<num<<"isprime";
		else
		cout<<num<<": is not a prime number";
		
		
		
	
	
}
