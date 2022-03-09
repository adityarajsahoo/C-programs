#include<stdio.h>

int main()
{
    int i;
    int j;

    for (i=0,j=10;i<=10,j>=0;i++,j--)
    {
        printf("%d + %d = %d \n",i,j,i+j);
    }
}
