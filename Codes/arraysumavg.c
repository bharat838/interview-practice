#include <stdio.h>
int main()
{
 int size,avg;
 printf("enter array size");
 scanf("%d",&size);
    
    int arr[size];
    printf("enter array element\n");

    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int sum=0;

    for(int i=0;i<size;i++)
    sum+=arr[i];

    printf("sum of array is %d",sum);
    avg = sum/size;
  
    printf("average of sum %d",avg);


    return 0;

 

}