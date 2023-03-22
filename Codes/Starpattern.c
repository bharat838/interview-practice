/*
         Star Pattern  Program 
*/

#include <stdio.h>
int main(){
    int totalrowno,rowno,colno;
    printf("enter no. of row= ");
    scanf("%d",&totalrowno);

    for(rowno=1;rowno<=totalrowno;rowno++)
    {
        for(colno=1;colno<=rowno;colno++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}