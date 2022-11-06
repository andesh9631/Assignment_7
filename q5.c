// 5. Write a program to check whether two given numbers are co-prime
// numbers or not

#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=2;i<=min;i++){
        if(a%i==0 && b%i==0)
         break;
    }
    if(i==min+1)
         printf(" %d and %d are co-prime number ",a,b);
    else
         printf(" %d and %d are not co-prime number ",a,b);


    
}



// //  N co-prime number code
// #include<stdio.h>
// int main()
// {
//   int a=2,b,n,i,min,exit;
//   printf("Enter the N co-prime number");
//   scanf("%d",&n);
//    while(n){
//     for(b=2;b<=a;b++){
//       min=a<b?a:b;
//       for(i=2;i<=min;i++){
//           if(a%i==0 && b%i==0)
//                 break;
//       }
//        if(i==min+1){
//          printf("\n(%d , %d )",a,b);
//          n--
        
//        }
//     }
//      a++
//    }
// }