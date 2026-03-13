//WAP to check a number is odd or even using function
    // #include<stdio.h>
    // int is_even(int num){
    //     if(num%2==0){
    //         return 1;
    //     }
    //     else{
    //         return 0;
    //     }
    // }
    // int main(){
    //     int number;
    //     printf("Enter a number:");
    //     scanf("%d",&number);
    //     if(is_even(number)){
    //         printf("%d is even number\n",number);
    //     }
    //     else{
    //         printf("%d is odd number\n",number);
    //     }
    //     return 0;
    // }
//WAP to input a number and find its factorial using function
    // #include<stdio.h>
    // int factorial(int num){
    //     if(num==0 || num==1){
    //         return 1;
    //     }
    //     else{
    //         return num*factorial(num-1);
    //     }
    // }
    // int main(){
    //     int number;
    //     printf("Enter a number to find its factorial:");
    //     scanf("%d",&number);
    //     printf("Factorial of %d is %d\n",number,factorial(number));
    //     return 0;
    // }   
    // //WAP to input a number and check if it is prime number or not using function
    // #include<stdio.h>
    // int is_prime(int num){
    //     if(num<=1){ 
    //         return 0; 
    //     }
    //     for(int i=2;i*i<=num;i++){
    //         if(num%i==0){       
    //             return 0; 
    //         }
    //     }
    //     return 1;
    // }
    // int main(){
    //     int number;
    //     printf("Enter a number to check if it is prime or not:");
    //     scanf("%d",&number);    
    //     if(is_prime(number)){
    //         printf("%d is a prime number\n",number);
    //     }
    //     else{
    //         printf("%d is not a prime number\n",number);
    //     }
    //     return 0;
    // }
   //WAP to find the maximum of three numbers using function
    // #include<stdio.h>
    // int max_of_three(int a,int b,int c){
    //     int max=a;
    //     if(b>max){
    //         max=b;
    //     }
    //     if(c>max){
    //         max=c;
    //     }
    //     return max;
    // }
    // int main(){ 
    //       int a,b,c;
    //       printf("Enter three numbers:");
    //       scanf("%d %d %d",&a,&b,&c);
    //       printf("Maximum of three numbers is %d\n",max_of_three(a,b,c));
    //   }
  //WAP to generate random 4 digit password using function
//    #include<stdio.h>
//    #include<stdlib.h>
//    #include<time.h>
//    int generate_pin(){
//    int password;
//    srand(time(0));
//     password=rand()%9000+1000;
//    return password;
// }
//   int main(){
//   int pass=generate_pin();
//   printf("Suggested pin: %d\n", pass);
//   return 0;
// } 
//WAP to multiply two numbers using recursion
// #include<stdio.h>
// int multiply(int a, int b) {
//     if (b == 0) {
//         return 0;
//     }
//     if (b == 1) {
//         return a;
//     }
//     return a + multiply(a, b - 1);
// }
// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("Product of %d and %d is %d\n", num1, num2, multiply(num1, num2));
//     return 0;
// }
//WAP to input a number and display its reverse using recursion
// #include<stdio.h>
// void reverse_num(int n){
//     static int rev=0;        
//     if(n==0){
//         printf("Reversed number is:%d\n",rev);
//         return;
//     }
//     else{
//         rev=rev*10+n%10;
//         reverse_num(n/10);
//     }
// }        
// int main(){
//     int number;
//     printf("Enter a number to reverse:");
//     scanf("%d",&number);
//     reverse_num(number);
//     return 0;
// }
//WAP to display first 10 numbers of Fibonaacci series using recursion
// #include<stdio.h>
// int fibo(int i){ 
//     if(i==0){
//         return 0;
//     }        
//     else if(i==1){
//         return 1;
//     }
//     else{
//         return fibo(i-1)+(fibo(i-2));
//     }
// }
// int main(){
//     int i;
//     printf("Fibonacci series from index 0 to 9:\n");
//     for(i=0;i<10;i++){
//         printf("Fibonacci value at index %d is %d\n",i,fibo(i));
//     }
//     return 0;
// }
//WAP to print the Fibonacci series up to N terms using recursion
    // #include<stdio.h>
    // int fibo(int i){
    //     if(i==0){
    //         return 0;
    //     }
    //     else if(i==1){
    //         return 1;
    //     }
    //     else{
    //         return fibo(i-1)+(fibo(i-2));
    //     }
    // }
    // int main(){
    //     int n,i;
    //     printf("Enter the number of terms N for Fibonacci series:");
    //     scanf("%d",&n);
    //     printf("Fibonacci series up to %d terms:\n",n);
    //     for(i=0;i<n;i++){
    //         printf("Fibonacci value at index %d is %d\n",i,fibo(i));
    //     }
    //     return 0;
    // }