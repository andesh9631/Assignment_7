// 9. Write a program to check whether a given number is an Armstrong number
// or not
#include<stdio.h>
int main()
{
    int n,i,arm=0,r,c;
    printf("ENter the nuber\n");
    scanf("%d",&n);
    c=n;
    while(n>0)
      {
             r=n%10;
             arm+=r*r*r;
             n=n/10;


      }
       if(c==arm)
             printf("armstrong number");
        else 
            printf("not armstrong number");

      return 0;

}
