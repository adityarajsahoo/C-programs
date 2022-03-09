#include<stdio.h>

main()
{
    int num1;
    int num2;
    int num3;
    printf("Enter 1st number \n");
    scanf("%d",&num1);
    printf("Enter 2nd number \n");
    scanf("%d",&num2);
    printf("Enter 3rd number \n");
    scanf("%d",&num3);
    if(num1>=num2);
    {
        if(num1>=num3);
            printf("Greatest number is %d",num1);
    }
    elif (num2>=num1);
    {
        if(num2>=num3);
            printf("Greatest number is %d",num2);
    }
    else
    printf("Greatest number is %d",num3);
}
