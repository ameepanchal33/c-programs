#include<iostream>
using namespace std;
int main()
{
	int a,i=1;
	cout<<"enter your number";
	cin>>a;
	table:
	cout<<a<<"*"<<i<<"="<<a*i<<endl;
	i++;
	if(i<=10){
		goto table;
	}
}

