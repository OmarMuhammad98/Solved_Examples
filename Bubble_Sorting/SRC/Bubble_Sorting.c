/************************************************
********** Author : Omar Muhammad Farg***********
********** Date   : 29/7/2022 *******************
*************************************************/
#include <stdio.h>
void  main (void)
{
  int ARRAY[6] = {12,4,19,49,30,1};
  /************************************************************
	**************getting the size of the array*****************
	*************************************************************/
  int SizeOF_Array = sizeof(ARRAY)/sizeof(int);
  int i,j,temp;
  
  /************************************************************
	*********priting the  elements of the array****************
	***********************************************************/
  for (i=0;i<SizeOF_Array;i++){
	 printf("Values of The Array before Bubble soring is : %d\n", ARRAY[i]);
  }

  for(i =0;i<SizeOF_Array-1;i++){

	  for(j=0;j<SizeOF_Array-i-1;j++){
    /************************************************************
	*******************Comparing the index with the next one*****
	***********************************************************/
		  if(ARRAY[j]>ARRAY[j+1])
	/************************************************************
	*******************The Swap Function ********************
	***********************************************************/
		  {
			  temp =ARRAY[j];
			  ARRAY[j] = ARRAY[j+1];
			  ARRAY[j+1]= temp;
		  }
	  }
  }
    /************************************************************
	*********priting the  elements of the array****************
	*************** After Bubble Sorin*************************
	***********************************************************/
     printf("************ making the bubble soring **********\n");
  for(int iterat=0;iterat<SizeOF_Array;iterat++){
  printf("The values of the Array after sorting : %d\n", ARRAY[iterat]);
  }
}
