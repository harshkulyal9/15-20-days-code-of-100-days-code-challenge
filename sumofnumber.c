//Write a program to find the sum of digits of a number.


#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int lastdigit=0;
    int sum=0;
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}