/*program for capital to small to capital using palindrome

#include <stdio.h>
#include <string.h>
#include<conio.h>

int main(){
    int i=0;
    char str[10],inputArray[100], reversedArray[100];
    printf("enter the letter=");
    scanf("%s", inputArray);
    strcpy(reversedArray, inputArray);
    strrev(reversedArray);
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

    if(strcmp(inputArray, reversedArray) == 0 )
      printf("%s is a palindrome.\n", inputArray);
   else
      printf("%s is not a palindrome.\n", inputArray);
     
    return 0;
}
*/
/*program for  palindrome
*/
#include <stdio.h>
#include <string.h>
#include<conio.h>

int main(){
    int i,j,len,status=0;
    char str[10];
    printf("enter the letter=");
     gets(str);
     
    len =strlen(str);
    for(i=0,j=len-1; i<=len/2 ; i++,j--)
    {
      printf("%c %c \n",str[i],str[j]);
      if(str[i]!=str[j])
      {
        status = 1;
        break;
      }
    }
     
        
   if(status == 0)
       printf("palindrome");
   else
       printf("Not Palindrome");
       
  return 0;
}

       
       