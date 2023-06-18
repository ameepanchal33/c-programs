#include<iostream>
using namespace std;
int main()
{   
    	int i,n,fect=1;
	cout<<"enter the number:";
	cin>>n;
	if(n<0){
		cout<<"negetive number::";
	}
	else{
	
		for(i=1;i<=n;++i){
			fect*=i;
			
		}
		cout<<"fectorial is:"<<fect;

      }
	
}
