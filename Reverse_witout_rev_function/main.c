#include <stdio.h>

void main () {

    char str_array[50];
    int i,j,lenght;
    printf("write a string : ");
    gets(str_array);

    i=0;
    while (str_array[i]!='\0'){
         lenght++; // get lenght of array with out strlen() function
         i++;
    }

   j = lenght-1;
    char temp;
    for (i=0, j; i<=j; i++,j--){ 
        temp = str_array[i];
        str_array[i] = str_array[j];
        str_array[j]=temp;
    }
    printf("%s",str_array);
}