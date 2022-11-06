//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
        int cur=1,perv=0,n,i,next=0;
        printf("Enter the any value of n:\n");
        scanf("%d",&n);
       /// printf("1");  not use in the question only use 2nd question
         for(i=1;i<=n;i++)// i=1;i<=n
         {
                next=perv+cur;
                 perv=cur;
                 cur=next;
         }
          printf("Nth terms is= %d ",next);
         

          return 0;

}