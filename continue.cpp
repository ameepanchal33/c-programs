#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	while(i<=10){
		cout<<"enter the no:";
		cin>>n;
		if(n<0)
		continue;
		sum+=n;
		i++;
	}
	cout<<sum;
}
