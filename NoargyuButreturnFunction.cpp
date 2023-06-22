#include<iostream>
using namespace std;
int fect(){
	int n,i,fect=1;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++){
		fect*=i;
	}
	return fect;
}
int main(){
	cout<<"fact"<<fect();
}
