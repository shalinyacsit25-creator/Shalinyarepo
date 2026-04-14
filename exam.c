// #include<stdio.h>
// int main()
// {
//     int num1=10,num2=20,num3=30,sum;
//     float avg;
//     sum=num1+num2+num3;
//     avg=sum/3;
//     printf("The average of three numbers is :%2f:",avg);
//     return 0;
// }
// 


// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d",&num);
//     if(num%2==0){
//         printf("The number is even");
//     }
//     else{
//         printf("The number is odd");
//     }
//     return 0;
//     }
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d",&num);
//     if(num%2==0&&num%3==0){
//         printf("The number is divisible by 2 and 3");
//         // printf("The number is divisible by 5");
//     }
//     else{
//         printf("The number is not divisible by 2 and 3");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d",&num);
    
//     if(num>0){
//         printf("The number is positive");
//     }
//     else if(num==0){
//         printf("The number is zero");
//     }
//     else{
//         printf("The number is negative");
//     }
//     return 0;
// }
#include<stdio.h>

int main(){
    char tree;
    
    printf("Enter a character: ");
    scanf("%c", &tree);

    if((tree >= 'a' && tree <= 'z') || (tree >= 'A' && tree <= 'Z')){
        printf("The character is an alphabet");
    }
    else if(tree >= '0' && tree <= '9'){
        printf("The character is a number");
    }
    else{
        printf("It is a special character");
    }

    return 0;
}
// #include<stdio.h>
// int main(){
//     printf("Hello World\n");
//     return 0;
// }