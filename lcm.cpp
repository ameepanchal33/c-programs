#include<iostream>
using namespace std;
int main()
{
	int n1,n2,max;
	cout<<"enter number::";
	cout<<"\n";
	cin>>n1>>n2;
	max=(n1>n2)?n1:n2;

	while(true){
		if(max%n1==0 && max%n2==0){
			cout<<"lcm:"<<max;
			break;
			}
			max++;
			
		}
	
    
	
}
