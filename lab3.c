// WAP to print all odd numbers from 1 to 50
// #include<stdio.h>
// int main(){
//     for (int i = 1; i <=50; i=i+2)
//     {
//         printf("%d\n",i);
//     }
//     return 0;   
// }
// WAP to take input value of N and find the sum of all even numbers form 1 to N
//    #include<stdio.h>
//     int main(){
//         int n,sum=0;
//         printf("Enter a number:");
//         scanf("%d",&n);
//         for (int i = 2; i <=n; i=i+2)
//         {
//             sum=sum+i;
//         }
//         printf("Sum of all even numbers from 1 to %d is %d",n,sum);
//         return 0;
//     }
// WAP to take input and count the digits of a number 
//  #include<stdio.h>
// int main(){
//     int number;
//     int count = 0;
//     printf("Enter a number :");
//     scanf("%d", &number);
//     if(number == 0){
//         count = 1;
//     }else{
//         while(number != 0){
//             number = number / 10;
//             count++;
//         }
//     } 
//     printf("Number of total digits: %d\n", count);
//     return 0;

//}
// WAP to check is number is prime or not
//  #include<stdio.h>
// int main(){
//    int num,isPrime=1,i;
//   printf("Enter a number:");
//   scanf("%d",&num);
//   if(num==2){
//    printf("It is a prime");
//    return 0;
//   }
// for(i=2;i<5;i++){
//    if(num==1){
//       printf("1 is neither prime nor composite");
//    }
//    if(num==2){
//       isPrime=1;
//    }
//    else if(num%i==0){
//       isPrime=0;
//       break;
//    }
// }
// if(isPrime==0){
//    printf("It is not a prime number");
// }
// else{
//  printf("It is a prime number ");
// }
// return 0;
// }
// WAP 
// #include<stdio.h>
// int main(){
//     int number, i, j, ifPrime;
//     printf("Enter a number : \n");
//     scanf("%d", &number);
//     printf("Prime numbers up to %d are : \n", number);
//     for(i = 2; i <= number; i++){
//         ifPrime = 1;
//         for(j = 2; j <= i / 2; j++){
//             if(i % j == 0){
//                 ifPrime = 0;
//                 break;
//             }
//         }
//         if(ifPrime == 1){
//             printf("%d\t", i);
//         }
//     }  
//     return 0;
// }
//WAP to check palindrome number
    // #include<stdio.h>
    // int main(){
    //     int num,reverse=0,rem,orgNum;
    //     printf("Enter a number:");
    // scanf("%d",&num);
    // orgNum=num;
    // while (num!=0)
    // {
    //     rem=num%10;
    //     reverse=reverse*10+rem;
    //     num=num/10;
    // }
    // if(orgNum==reverse){
    //     printf("It is a palindrome number");
    // }
    // else{
    //     printf("It is not a palindrome number");
    // }
    // return 0;
    // }
    //Pattern printing
//      #include<stdio.h>
//       int main(){
//     int i, j, n = 5;
//     for(i = n; i >= 1; i--){
//         for(j = n; j > i; j--){
//             printf("  ");
//         }
//         for(j = 1; j <= (2 * i - 1); j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// pattern 2
// #include<stdio.h>
// int main(){
//     int i, j, n = 4;
//     for(i = 1; i <= n; i++){
//         for(j = 1; j <= i; j++){
//             printf("%d ", 2 * i - 1);
//         }
//         printf("\n");
//     }
//     return 0;
// } 
// //pattern 3
// #include<stdio.h>
// int main(){
//     int i, j, space, n = 4;
//     for(i = 1; i <= n; i++){
//         for(space = 1; space <= n - i; space++){
//             printf(" ");
//         }
//         for(j = 1; j <= i; j++){
//             printf("%d ", j);
//         }
//         for(j = i - 1; j >= 1; j--){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
