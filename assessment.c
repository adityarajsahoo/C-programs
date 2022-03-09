#include<stdio.h>
/*
This is multi line comment
To arrange two numbers in descending order
*/
int main()
{
    int num1;
    int num2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);

    if (num1>num2)
    printf("descending order of the numbers are: %d %d \n", num1, num2);

    else
    printf ("descending order of the numbers are: %d %d \n", num2,num1);

    if(num1==num2)

    printf("both the numbers are equal");
}
