#include<iostream>
using namespace std;
int main()
{
	
	int i,j,rows;
	cout<<"enter the rows:";
	cin>>rows;
	for(i=0;i<=rows;++i){
		for(j=0;i>=j;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
	
}
