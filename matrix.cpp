#include<iostream>
using namespace std;
int main(){
	int a[2][3];
	int b[2][3];
	int res,i,j;
	
	cout<< "enter array elements for a::";
	for(i=1;i<=2;i++){
		for(j=1;j<=3;j++){
			cin>>a[i][j];
			
		}
	
	}
	cout<< "/nenter array elements for b:";
	for(i=1;i<=2;i++){
		for(j=1;j<=3;j++){
			cin>>b[i][j];
			
		}
	
	}
	

	for(i=1;i<=2;i++){
		for(j=1;j<=3;j++){
			res=a[i][j]+b[i][j];
			cout<<res<<"\t";
		}
		cout<<endl;
	}
}
