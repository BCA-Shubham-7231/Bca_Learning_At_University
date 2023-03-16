//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task
#include<stdio.h>
int main() 
{
  int a,num,count=0;
  printf("Enter the number : ");
  scanf("%d",&num);
  while(num%8 == 0)
  {
    printf("Enter the number : ");
    scanf("%d",&num);
    count++;
  }
  printf("%d",count);
  return 0;
}
