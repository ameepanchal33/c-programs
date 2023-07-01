//string anagram match the position
#include<stdio.h>
int main()
{
    char s[100],t[100];
    printf("\nEnter string s : ");
    scanf("%s",s);
    printf("\nEnter string t : ");
    scanf("%s",t);
    int i,sum_s=0,sum_t=0,c=0;
    if(strlen(s)==strlen(t))
    {
        for( i=0;i<strlen(s);i++)
        {
            sum_s+=s[i];
            sum_t+=t[i];
            if(s[i]==t[i])
                c++;
        }
        if(sum_s==sum_t)
            printf("\nString anagram : Matching positions : %d",c);
        else
            printf("\nString not anagram : -1");
    }
    else{
        printf("\nString not equal length : -1");
    }
    return 0;
}

