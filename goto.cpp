#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	
	for(int i=0;i<=3;i++){
		for(j=0;j<=2;j++){
			for(k=0;k<=2;k++){
				cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<endl;
				if(j==2){
					goto jump;
				}
				
			}
		}
	}
	jump:
		;
	
}
