#include<stdio.h>
#include<stdlib.h>
//#include<time.h>
int main()
{   int a,b,c;
	while(1){
	
	printf("\nenter the number:");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",(a!=b && b!=c && c!=a));
	sleep(2);
}
}
