#include<stdio.h>

int main()
{
    int num1;
    int num2;
    int r;
    int a;
    int b;

    printf("enter num1:\n");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);

    if (num1>num2)
    {
        a=num1;
        b=num2;
    }
    else
    {
        a=num2;
        b=num1;
    }
    do
    {
        r=a%b;
        a=b;
        b=r;
    }
    while(r!=0);
        printf("HCF is %d",a);
}
