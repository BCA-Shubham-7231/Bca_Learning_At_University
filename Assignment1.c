//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.
#include<stdio.h>
int main()
{
  //add your code here
  int n,pos=0,neg=0,i;
  float num;
  printf("Enter total no. of numbers you want to input");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%f",&num);
    if(num>0)
      pos++;
    else if(num<0)
      neg++;
  }
  printf("\nTotal positive numbers are: %d \nTotal negative numbers are: %d",pos,neg);
  
  
  return 0;
}
