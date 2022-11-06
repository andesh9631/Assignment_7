
//3. Write a program to check whether a given number is there in the 
//Fibonacci series or not.
#include<stdio.h>
int main()
{
   int prev=0,curn=1,next=0,n,i;
   printf("Enter the number\n");
   scanf("%d",&n);
   for(i=1;i<=n ;i++)
     {
        next=prev+curn;
        prev=curn;
        curn=next;
          
          if(next==n)
            {
              printf("Number is fibonacci");
              break;
            }
          if(next>n)
            {
              printf("number is not fibonacci");
              break;
            }
    }




    // //2nd method
    //  int a=0,b=1,c=0,n,i;
    // printf("ENter the any number:\n");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    //   {
    //     c=a+b;
    //     a=b;
    //     b=c;
    //     if(c==n)
    //        {
    //            printf("number fiboacci hai");
    //            break;

    //        }
    //        if(c>n)
    //          {
    //             printf("number not fiboacci hai");
    //             break;
    //          }
    //   }
      return 0;
}