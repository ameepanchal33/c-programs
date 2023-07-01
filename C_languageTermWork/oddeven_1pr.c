//collataz function is define for positiveintegers n as follows,
//if n is odd follow the 3n+1,
//if n is even follow the n/2
#include <stdio.h>
int Collatz(int num,int count){

	if(num==1)
		return count;
	else{
		if(num%2==0)
			return Collatz(num/2,++count);
		else
			return Collatz(3*num+1,++count);
	}
	return count;
}

int main(){
	int num,count=0;
	printf("Enter the value from the user : ");
	scanf("%d",&num);

	printf("%d\n",Collatz(num,count));
	return 0;
}
