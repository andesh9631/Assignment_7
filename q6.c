// 6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
  // int n=100,m=1,x,i;
  int n,m,x,i;
    printf("Enter the number");
    scanf("%d%d",&m,&n);
    for(x=m+1;x<=(n-1);x++)
      {
         for(i=2;i<x;i++)
           {
              if(x%i==0)
                 break;
           }
        
         if(i==x)
            printf(" %d ",x);
      }
        
        return 0;
}
    