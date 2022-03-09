
#include<stdio.h>
/*sum of first n even numbers
*/

int main()
{
    int n;
    int num=0;
    int total=0;
    int i;

    printf("enter the number of natural numbers upto which you want sum:\t");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
      num=num+2;
      total=total+num;
    }
    printf("the sum of first %d even number is %d",n,total);

}
