/* Ritik wants a magic board, which displays a character for a corresponding number for his science project. 
Help him to develop such an application.
For example when the digits 65,66,67,68 are entered, the alphabet ABCD are to be displayed.
[Assume the number of inputs should be always 4*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Enter the digits: \n");

    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    char q=(char)a;
    char w=(char)b;
    char e=(char)c;
    char r=(char)d;

    printf("%d - %c\n",a,q);
    printf("%d - %c\n",b,w);
    printf("%d - %c\n",c,e);
    printf("%d - %c\n",d,r);

return 0;
}