//WAP to enter a year and check whether it is a leap year or not
// #include<stdio.h>
// int main(){
//    int y;
//    printf("Enter the year:");
//    scanf("%d",&y);
//    if (y%4==0)
//    {
//       printf( "Its a leap year");
   
//    }
//    else{
//       printf("Not a leap year");
//    }
   
// return 0;
// }
 //}
// WAP to input a number and check whether it is odd or even without using else statement
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     switch (num % 2) {
//         case 0:
//             printf("Even number");
//             break;
//         case 1:
//             printf("Odd number");
//             break;
//     }

//     return 0;
// }

// }
//WAP to check if the user input is alphabet digit or a special character
// #include<stdio.h>
// int main()
// {
//    char character;
//    printf("Enter a character");
//    scanf("%c",&character);
//    if((character>='a'&& character<='z')||(character>='A'&&character<='Z')){
//       printf("%c is an alphabet \n",character);
//    }
//    else if (character>='0'&& character<='9')
//    {
//       printf("%c is a digit\n",character);
//    }
//    else{
//       printf("%c is a special character \n",character);
//    }
//    return 0;
// }
//WAP to input an character and check whether it is in lower case or uppercase
// #include<stdio.h>
// int main(){
//    char character;
//    printf("Enter a character:");
//    scanf("%c",&character);
//    if (character>='a'&&character<='z')
//    {
//       printf("It is lowercase");
//    }
//    else{
//       printf("It is uppercase");
//    }

//  return 0;
// }
// }
//WAP to
// #include<stdio.h>
// int main()
// {
//     int  num1,num2;
//     char operator;
//     float result;
//     printf("Enter first number");
//    scanf("%d",&num1);
//    printf("Enter second number");
//    scanf("%d",&num2);
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
    

// }
//  return 0;
// }
//WAP to find and perform menu operations
// #include <stdio.h>

// int main() {
//     int l, b, h, r, ba;
//     int choice;
//     float Ac, Ab, At;

//     printf("1. Area of Circle\n");
//     printf("2. Area of Rectangle\n");
//     printf("3. Area of Triangle\n");
//     printf("4. Exit\n");

//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1:
//             printf("Enter the radius: ");
//             scanf("%d", &r);
//             Ac = 3.14 * r * r;
//             printf("The area of circle is %.2f\n", Ac);
//             break;

//         case 2:
//             printf("Enter the length of rectangle: ");
//             scanf("%d", &l);
//             printf("Enter the breadth of rectangle: ");
//             scanf("%d", &b);
//             Ab = l * b;
//             printf("The area of rectangle is %.2f\n", Ab);
//             break;

//         case 3:
//             printf("Enter the base: ");
//             scanf("%d", &ba);
//             printf("Enter the height: ");
//             scanf("%d", &h);
//             At = 0.5 * ba * h;
//             printf("The area of triangle is %.2f\n", At);
//             break;

//         case 4:
//             printf("Exit\n");
//             break;

//         default:
//             printf("Invalid choice\n");
//     }

//     return 0;
//}
// //WAP to convey message
// #include <stdio.h>

// int main() {
//     float time;

//     printf("Enter time in 24-hour format (e.g. 13.30): ");
//     scanf("%f", &time);

//     if (time >= 5.00 && time <= 11.59) {
//         printf("Good Morning");
//     }
//     else if (time >= 12.00 && time <= 15.59) {
//         printf("Good Afternoon");
//     }
//     else if (time >= 16.00 && time <= 18.59) {
//         printf("Good Evening");
//     }
//     else if (time >= 19.00 && time <= 23.59) {
//         printf("Good Night");
//     }
//     else {
//         printf("Invalid Time");
//     }

//     return 0;
// }