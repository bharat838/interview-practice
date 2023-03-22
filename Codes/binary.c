/*
#include <stdio.h>  
int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    

        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    

        else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }          
    }    
    return -1;     
}   
int main() {  
  int a[] = {11, 14, 25, 30, 40, 41, 52, 57, 70};  
  int val = 20;
  int n = sizeof(a) / sizeof(a[0]);  
  int res = binarySearch(a, 0, n-1, val);  
  printf("The elements of the array are - ");  
  for (int i = 0; i < n; i++)  
    printf("%d ", a[i]);   
  printf("\nElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}  
*/
#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("\nEnter number of elementsn =");
scanf("%d",&n);
printf("\nEnter %d integersn =", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("\nEnter value to findn =");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}