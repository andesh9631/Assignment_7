//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,i,hcf=1;// hcf =1 by default hota hai
    printf("Enter the two  number :\n");
    scanf("%d%d",&a,&b);
    int min=a<b?a:b;
    for(i=1;i<=min;i++)
      {
        if((a%i==0)&&(b%i==0))
            {
                hcf=i;  // hcf ka dono me se sabse bada common number hogsa hch
                    // yeha pe break lagane per always print 1
            }
      }
      printf("hcf = %d ",hcf);
      return 0;
      
/* #include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"Enter the number";
    cin>>a>>b;
    int min=a<b?a:b;
    for(i=1;min>=1;min--)
    {
        if(a%min==0 && b%min==0)
          break;
    }
    cout<<min<<endl;
    return 0;
}*/
   
}