//find highest common factor
#include<stdio.h>
int main(){
 int n1;
 printf("enter the number 1:");
 scanf("%d",&n1);
 int n2;
 printf("enter the value of number 2:");
 scanf("%d",&n2);
 int hcf;
 for(int i=1;i<=n1 && i<=n2; i++){
   if(n1%i==0 &&n2%i==0)
   hcf=i;
 } 
 printf("%d",hcf);
 return 0;
}