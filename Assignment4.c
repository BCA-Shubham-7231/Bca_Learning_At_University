//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include<stdio.h>
void main()
{
	int arr[3][3],i,j,max;
	printf("Enter the elements of 3X3 matrix:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value of [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			max=arr[i][j];
			if(max<arr[i][j])
			{
				max=arr[i][j] ;
			}
		}
		printf("Maximum element in %d line is : %d\n",i+1,max);
	}
	
}
