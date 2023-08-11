#include <stdio.h>

void main (void){
    int array[10] ={0};
    int lenght ; 
    int input_value ; 
    int location;
    int temp;

    printf("enter the lenght: ");
    scanf("%d",&lenght);
     
    for (int i = 0; i<lenght; i++){
        printf("enter element number %d: ",i+1);
        scanf("%d",&array[i]);
     }
    printf("enter the value to be inserted: ");
    scanf("%d",&input_value);

    printf("enter the location: ");
    scanf("%d",&location);
    
    int x = array[location-1]; // to save the value of array[location] 
    // as we don't do a swap here.
   
    for(int i = location; i<=lenght;i++){
        temp = array[i]; // here the swap 
        array[i] = x;
        x = temp; // terminate the intial value at line 23.  and put the value of array[i]
    }
    array[location-1] = input_value;

    for (int i = 0; i<10;i++){
        if (array[i]==0) // i don't want to print the rest of array (o) as intialized before.
        break;
        printf("the values : %d \n",array[i]);
        
    }
}