//Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int lcm;
    int n1;
    printf("enter the number1:");
    scanf("%d",&n1);
     int n2;
    printf("enter the number2:");
    scanf("%d",&n2);
    int max;
    if(n1>n2){    
           max=n1;
}else{
    max=n2;
}
for(lcm=max; ;lcm++){
    if(lcm%n1==0 && lcm%n2==0){
        break;
    }
}printf("%d",lcm);
return 0;
}

