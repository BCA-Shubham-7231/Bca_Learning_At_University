//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

#include<stdio.h>
void main()
{
    int n,i,max,abs=0,pass=0,fail=0;
    printf("Enter the number of students(max.50)");
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
   	max=marks[0];
	for(i=0;i<n;i++)
	{
		if(marks[i]>max)
		{
			max=marks[i];
		}
		if(marks[i]==-1)
		{
			abs=abs+1;
		}
		else if(marks[i]>=50)
		{
			pass=pass+1;
		}
		else
		{
			fail=fail+1;
		}
	}
	printf("Number of Passed Students are: %d\n",pass);
	printf("Number of Failed Students are: %d\n",fail);
	printf("Number of Absent Students are: %d\n",abs);
	printf("Highest marks Scored by student is : %d",max);
}

