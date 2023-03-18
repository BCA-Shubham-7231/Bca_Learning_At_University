#include<stdio.h>
void main()
{
    int n,i,j,temp,count=0,flag;
    printf("Enter number of Elements to enter: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elemnets\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
        for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
	}
	printf("Sorted array is :\n");
	for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i!=j)
            {
                if(arr[i]!=arr[j])
                flag=1;
                    else
                    {
                        flag=0;
                        break;
                    }
            }
        }
        if(flag==1)
            count++;
    }
    printf("\nTotal number of distinct elements are : %d",count);
}

