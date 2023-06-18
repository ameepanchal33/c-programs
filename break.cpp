#include<iostream>
using namespace std;
int main(){
	int i=1,n,j,sum=0;
	while(i<=5){
		cout<<"\nenter number";
		cin>>n;
		if(n<0){
			break;
		}
		sum+=n;
		i++;
		cout<<endl<<sum;
	}
}
