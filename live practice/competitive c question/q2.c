 #include<stdio.h>
#include<string.h>
int main()
{
    int a[26],i,k,n,c=0,j;
    char s[50];
    printf("enter the number of test cases\n");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
        for(j=0;j<26;j++)
        {
            a[j]=0;
        }
    printf("enter the string\n");
    scanf("%s",&s);
    for(j=0;j<strlen(s);j++)
    {
        k=(int)s[j]-97;
        a[k]++;
    }
    for(j=0;j<26;j++)
    {
        if(a[j]==j+1||a[j]==0)
            c=1;
        else
        {
             c=0;
        break;
        }
    }
    if(c!=0)
        printf("Yes\n");
    else
        printf("No\n");
}
 return 0;
}
