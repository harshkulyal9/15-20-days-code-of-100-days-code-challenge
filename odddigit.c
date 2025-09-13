//Write a program to find the product of odd digits of a number.


#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int lastdigit=0;
    int multiply=1;
    while(n!=0){
        lastdigit=n%10;
        if(n%2!=0){
            multiply=multiply*lastdigit;
        }
        n=n/10;
    }
    printf("%d",multiply);
    return 0;
}