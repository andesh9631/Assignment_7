//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int cur=1,prev=0,next=0,n,i;
    printf("Enter the any number :\n");
    scanf("%d",&n);
    //printf("1");
    for(i=1;i<=n;i++)
    {
        next=prev+cur;
        printf("\n N terms =%d ",next);
        prev=cur;
        cur=next;
    }
    return 0;
    
}