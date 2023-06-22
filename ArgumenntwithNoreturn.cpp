#include<iostream>
using namespace std;
int fect(int n){
	int i,fect=1;
	for(int i=1;i<=n;i++){
		fect*=i;
	}
	
	cout<<fect;
}

int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	cout<<"fectorial os number:";
	fect(n);
	
	
}
