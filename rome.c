// WAP to add two numbers inside a function
#include<stdio.h>
int add_num(int num1,int b);
    int main(){
        int num1=10,num2=45,sum;
        sum=add_num (num1,num2);
        printf("Sum of %d and %d is %d\n",num1,num2,sum);
        return 0;
    }
int add_num(int num1,int num2){
    add_num=num1+num2;
    return add_num; 

    
}