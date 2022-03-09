#include<stdio.h>
/* to find odd and even numbers
*/
int main()
{
    int i;
    int j=0;
    int k=0;
    int n;

    printf("enter the number of elements");
    scanf("%d",&n);
    int array[n];
    int odd[n];
    int even[n];

    for(i=0;i<n;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&array[i]);

    }
    for(i=0;i<n;i++)
    {
        if (array[i]%2==0){
            even[k]=array[i];
            k++;}
        else{
            odd[j]=array[i];
            j++;}

    }
    printf("even numbers are \n");
    if(j!=0)
        for(i=0;i<j;i++)
        printf("%d",even[i]);
    printf("odd numbers are \n");
    if(i!=0)
        for(j=0;j<i;j++)
        printf("%d",odd[j]);






}
