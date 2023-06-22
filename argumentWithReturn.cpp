#include<iostream>
using namespace std;
int fect(int n){
	int i,fect=1;
	for(i=1;i<=n;i++){
		fect*=i;
	}
	return fect;
}
int main(){
	int n;
	cout<<"enter the value";
	cin>>n;
	cout<<fect(n);
	
	
}
