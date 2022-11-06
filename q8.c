// 8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
  int i,n,x;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=n+1;;i++){
     for(x=2;x<i;x++){
        if(i%x==0)
          break;
     }
      if(i==x)
        break;
  }
  printf("the next ptime number of %d is %d ",n,i);
}