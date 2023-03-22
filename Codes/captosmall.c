/*program for capital to small to capital
*/
#include<stdio.h>
#include<conio.h>

int main(){
    int i=0;
    char str[10];
    printf("enter the letter=");
    gets(str);
    while(str[i]!='\0')
    
    {
        if(str[i]>=65 && str[i]<= 90)
        str[i]=str[i]+32;
        else if(str[i]>= 97 && str[i]<=122)
        str[i]=str[i]-32;
        i++;
              
    }
    printf("%s",str);
    return 0;
}

       