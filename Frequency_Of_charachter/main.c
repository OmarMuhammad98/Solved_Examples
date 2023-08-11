#include <stdio.h>
#include <string.h>

 void main ( ){
       char string_array[100]; char elemnt;
       printf("enter the string : ");
       gets(string_array);
       
       printf("enter the element to be checked : ");
       scanf("%c",&elemnt);
       int i , counter =0;
      for (i=0; i<=strlen(string_array); i++){
            if (string_array[i]==elemnt)
            {
                  counter++;
            }
            
      }     
       printf("the element \"%c\" existed %d times ",elemnt,counter);

 }