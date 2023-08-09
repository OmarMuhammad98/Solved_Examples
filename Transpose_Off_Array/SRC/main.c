#include <stdio.h>

void main () {
    int org_Arr[3][3];
    int r,c;
    int Trans_Arr[3][3];
    // take inputs from user.
    for (r =0; r<3;r++){
        for ( c =0; c < 3; c++)
        {
            printf("enter element %d %d of array : ",r+1,c+1);
            scanf("%d",&org_Arr[r][c]);

        }
    }
    // print the original array. 
    printf("original : \n");
      for (r =0; r<3;r++){
        printf("row %d is: ",r+1);
        for ( c =0; c < 3; c++)
        {
            printf("%d\t",org_Arr[r][c]);
            

        }
        printf("\n");
    }
    // making the transpose.
    for (r =0; r<3;r++){
        for ( c =0; c < 3; c++)
        {
            Trans_Arr[r][c] = org_Arr[c][r];

        }
    }
    // print the transpos.
    printf("transpose : \n");
    for (r =0; r<3;r++){
        printf("row %d is: ",r+1);
        for ( c =0; c < 3; c++)
        {
            printf("%d\t",Trans_Arr[r][c]);
            

        }
        printf("\n");
    }

  
    
}