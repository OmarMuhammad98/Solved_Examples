#include <stdio.h>
 void main (void) {
          
            float arr1[2][2]; float arr2[2][2]; float sum[2][2];
            printf("Array 1: \n");
            // get Array 1 2D.
            for(int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    printf("enter element R:%d,C:%d: ",i+1,j+1);
                     scanf("%f",&arr1[i][j]);
                }
            }
            printf("Array 2: \n");
            // get Array 1 2D.
            for(int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                     printf("enter element R:%d,C:%d: ",i+1,j+1);
                     scanf("%f",&arr2[i][j]);
                }
            }

            // Sum 2 Arrays.
             
             for ( int i =0;i<2;i++){
                 for(int j=0;j<2;j++){

                    sum[i][j] = arr1[i][j] + arr2[i][j];
                 }
             }
             printf("sum : \n");

             for(int i =0;i<2;i++){
                for(int j=0;j<2;j++){
                   printf("%f \t",sum[i][j]);
                }
                printf("\n");
             }


 }