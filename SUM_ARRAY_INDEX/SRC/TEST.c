/************************************************
********** Author : Omar Muhammad Farg***********
********** Date   : 29/7/2022 *******************
*************************************************/
#include <stdio.h>
int GET_SUM (int *ARRAY_TO_POINTER , int ARRAY_LENGHT_TO_Funtion);
void main (void)
{
   
    int MY_ARRAY[3] = {0,0,0};
	int ARRAY_LENGHT = sizeof(MY_ARRAY) / sizeof(int);

	/************************************************************
	*********priting the perivous elements of the array**********
	*************************************************************/
	
	for (int i=0;i<ARRAY_LENGHT;i++)
	{
		printf("the elements of the array is : %d \n",MY_ARRAY[i]);
	}
	
	
	/************************************************************
	*********getting NEW elements of the array from User**********
	*************************************************************/
	for (int i=0;i<ARRAY_LENGHT;i++){
		printf("enter the array element number : %d :",i+1);
		scanf("%d",&MY_ARRAY[i]);
	}

	/************************************************************
	*********priting the perivous elements of the array**********
	*************************************************************/
	
	for (int i=0;i<ARRAY_LENGHT;i++)
	{
		printf("the elements of the array is : %d \n",MY_ARRAY[i]);
	}
		
	/************************************************************
	*********Calling the Summation Function***********************
	*************************************************************/
	
	int RESULT = GET_SUM(MY_ARRAY,ARRAY_LENGHT); 
	printf("the SUM of array is : %d \n",RESULT);
	
}


int GET_SUM (int *ARRAY_TO_POINTER, int ARRAY_LENGHT_TO_Funtion)
{
	int SUM =0;
	printf("the lenght of array is : %d \n",ARRAY_LENGHT_TO_Funtion);
	for(int i=0;i<ARRAY_LENGHT_TO_Funtion;i++){
		SUM += ARRAY_TO_POINTER[i];
	}
	return SUM;
}
