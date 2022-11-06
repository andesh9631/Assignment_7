// 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
    int main()
    {
        int n,m,x,i;
        printf("ENter the two number\n");
        scanf("%d%d",&n,&m);
        for(x=n+1;x<=(m-1);x++)
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