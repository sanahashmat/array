#include<stdio.h>
int main()
{
    int a[100];
    int i,n,sum=0;
    printf("enter number of array elements:");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
   {
       
        scanf("%d", &a[i]); 
   }
       for(i=0;i<n;i++)
       {
           sum+=a[i];
       }
    printf("sum of array elements is %d\n",sum);
    return 0;
}