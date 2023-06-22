#include<iostream>
using namespace std;
int fect(){
	int i,fect=1,n;
	cout<<"enter the num::";
	cin >>n;
	for(i=1;i<=n;i++){
		fect*=i;
	    
	}
	cout<<fect;
	
}
int main(){
  fect();
}
