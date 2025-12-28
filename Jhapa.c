// // #include<stdio.h>
// // int main(){
// int n;
// printf("enter a number");
// scanf("%d,&n");

// return 0;

// }

//wap to print day according to its related value. 
// #include<stdio.h>
// int main(){
// int day_value;
// printf("Enter the number");
// scanf("%d",&day_value);
// switch (day_value)
// {
// case 1:printf("Sun");
// break;
// case 2:printf("Mon");
// break;
// case 3:printf("Tue");
// break;
// case 4:printf("Wed");
// break;
// case 5:printf("Thu");
// break;   
//  default:
// printf("Invalid!" );
// break;
// }
// }

// #include<stdio.h>
// int main(){
//     int dig;
//     printf("Enter a number(1-4)");
//     scanf("%d",&dig);
//     switch(dig){
//         case 1:printf("One");
//             break;
//         case 2:printf("Two");
//             break;
//         case 3:printf("THree");
//             break;
//         case 4:printf("four");
//             break;
//             default:
//             printf("Invalid");
//             break;
//     } 
//     return 0;

// }

// #include<stdio.h>
// int main()
// {

//     float  num1,num2;
//     char operator;
//     float result;
//     printf("Enter two numbers");
//    scanf("%f,%f,&num1,&num2");

//     printf("Enter an operator");
//     scanf(" %c",&operator);
//     switch (operator){
//  case '+':
//  result=num1+num2;
//  printf("Result:%2f\n",result);
//  break;
//  case '-':
//  result=num1-num2;
//  printf("Result:%2f\n",result);
//  break;
//  case '*':
//  result=num1*num2;
//  printf("Result:%2f\n",result);
//     break;
//      case '/':
//      result=num1/num2;  
//    printf("Result:%2f\n",result);
//    break;
//    default:
//    printf("Invalid!");
//    break;
//         }

//  return 0;
// }

//WAP TO PRINT HELLOWORLD 10 TIMES
// #include<stdio.h>
// int main(){
//    printf("Hello World\n");
// printf("Hello World\n");
//    printf("Hello World\n");
// printf("Hello World\n");  
// printf("Hello World\n");
//    printf("Hello World\n");
// printf("Hello World\n");
//    printf("Hello World\n");
// printf("Hello World\n");
//    printf("Hello World\n");
// return 0;
// }

//WAP to  print your name 10 times
// #include<stdio.h>
// int main(){
//    for(int i=1; i <= 10; i++){
//       printf("Shalinya\n");
//    }
//    return 0;
// }
//WAP to print (1-10)numbers
// #include<stdio.h>
// int main(){
//    for(int i=1;i<=10 ;i++);{
  //printf("%d\n",i);
   // }
//    return 0;
// }

//WAP to add all numbers from (1-10) and print their sum
// #include<stdio.h>
// int main(){
//    int sum=0;
//    for (int i=1; i<11; i++){   
//    sum=sum+i;
//    }
//    printf("Sum of (1-10)=%d",sum);
//    }

//WAP to find odd numbers from (1 to 20)
// #include<stdio.h>
// int main(){
//    for (int  i = 1; i <=20; i=i+2)
//    {
//       printf("%d\n",i);
//    }
//    return 0;
// }

// WAP to print numbers from 20 to 1
// #include<stdio.h>
// int main(){
//   for (int i = 20; i > 0; i--)

//    {
//    printf("%d\n",i);
//    }
//    return 0;
// }
//WAP to print square if every numbers from 1 to 10
// #include<stdio.h>
// int main(){
//    int sq;
//    for (int i = 1; i < 10 ; i++)
//    {
//       sq=i*i;
//       printf("%d=%d",i,sq);
//    }
 //  return 0;
//}
//WAP to print even numbers and find their total sum of 1 to 20 
//WAP to take input of a number and print its multiplication table
//Homework
//WAP to input a number and find its factorial
//WAP to input a number and check if it is prime number or not
// #include<stdio.h>
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
//Homework
//WAP to take input and print the reverse of it
//eg:if num=123
//output=321 
//WAP to count how many times code got executed
// #include<stdio.h>
// int main(){
//   int i=1,count=0;
//   while (i<5)
//   {
//    count ++;
//    i++;
//   }
//   printf("Code got executed %d times",count);
//   return 0;
// }
//WAP to print "try again and again"until user types the correct digit
// #include<stdio.h>
// int main(){
// int num;
//   do
//   {

//     printf("Enter a number to check:");
//     scanf("%d",&num);
//     if(num!=0){
//       printf("Please try again!\n");
//     }

    
//   } while (num!=0);
//   return 0;
// }
//WAP to take a number and print its reverse value
#include<stdio.h>
int main(){
  int num,reverse=0,rem;
  printf("Enter a number");
 scanf("%d",&num);
 
 do
 {
  rem=num%10;
  reverse=reverse*10+rem;
  num=num/10;
 } while (num!=0);
 printf("Reverse is %d",reverse);
 
}