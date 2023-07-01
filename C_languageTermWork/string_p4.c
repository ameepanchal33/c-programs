#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,total_c=0;
    printf("Enter string s : ");
    scanf("%s",str);
    for( i=0;i<strlen(str);i++)
    {
        if(str[i]==str[i+1])
            c++;
       if(c!=0 && str[i]!=str[i+1])
       {
           if(total_c<c)
           {
               total_c=c;
           }
           c=0;
       }
    }
    if(total_c==0)
    {
        printf("no substring consisting of consecutive occurrences of the same character");
        return 0;
    }
    total_c+=1;
    printf("\n length of the longest run in string : %d",total_c);
    return 0;
}
