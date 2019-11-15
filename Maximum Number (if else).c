#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("\n%d is the maximum number\n",a);
    }
    else if(b>c)
    {
        printf("\n%d is the maximum number\n",b);
    }
    else
    {
        printf("\n%d is the maximum number\n",c);
    }


    return 0;
}
