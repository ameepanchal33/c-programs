//maximum number of distinct int
#include<stdio.h>
#include<math.h>
int fun(int m , int n);
void main()
{
    int m,n;

    printf("Enter M : ");
    scanf("%d", &m);

    printf("Enter N : ");
    scanf("%d", &n);
    if(m>n || n>100)
    {
        printf("enter N>M and N<=100");
        return;
    }
    printf("\nResult distnict number is : %d\n", fun(m, n));
}
int fun(int m, int n)
{
    int a[50], i,j, res;
    for(i=0;;i++)
    {
        int res = pow(2, i);
        a[i] = (res * m) % n;
        if(a[i]==0 || (a[i]==a[0] && i!=0))
            break;
    }
    printf("Result is : ");
    for(j = 0; j<=i; j++)
    {
        printf("%d ", a[j]);
    }
    if(a[i]==0)
    {
        return i+1;
    }
    return i;
}
