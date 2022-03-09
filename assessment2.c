#include<stdio.h>
/*tables till 25
*/
int main()
{
    int i;
    int j;

    for (i=1;i<26;i++)
    {
        for (j=1;j<26;j++)
        {
            printf("%d \t* %d \t= %d \t \n",i,j,i*j);
        }
printf("\n");
    }

}
