#include<stdio.h>
int main()
{
    int num,i=1,bin=0,temp;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%2;
        bin+=(i*temp);
        i*=10;
        num/=2;
        
       
    }
    printf("\nBinary conversion of the number is : %d",bin);
    return 1;
}
