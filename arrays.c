#include<stdio.h>

int main()
{
    int testdata[4];
    int copydata[4];
    int i;
    int j;

    for(i=0;i<4;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&testdata[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%d",testdata[i]);
    }

    testdata[i]=copydata[i];

    for(j=0;j<4;j++)
    {
        printf("%d",copydata[j]);
    }
}
