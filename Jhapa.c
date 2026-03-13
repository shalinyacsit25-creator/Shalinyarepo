// #include<stdio.h>
//  int main(){
// int n;
// printf("enter a number");
// scanf("%d",&n);

// return 0;

// }

// wap to print day according to its related value. 
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

// #incluade<stdio.h>
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

// WAP TO PRINT HELLOWORLD 10 TIMES
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

// WAP to  print your name 10 times
// #include<stdio.h>
// int main(){
//    for(int i=1; i <= 10; i++){
//       printf("Shalinya\n");
//    }
//    return 0;
// }
//. WAP to print (1-10)numbers
// #include<stdio.h>
// int main(){
//    for(int i=1;i<=10 ;i++);{
//   printf("%d\n",i);
//    }
//    return 0;
// }

// WAP to add all numbers from (1-10) and print their sum
// #include<stdio.h>
// int main(){
//    int sum=0;
//    for (int i=1; i<11; i++){   
//    sum=sum+i;
//    }
//    printf("Sum of (1-10)=%d",sum);
//    }

// WAP to find odd numbers from (1 to 20)
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
// WAP to print square if every numbers from 1 to 10
// #include<stdio.h>
// int main(){
//    int sq;
//    for (int i = 1; i < 10 ; i++)
//    {
//       sq=i*i;
//       printf("%d=%d",i,sq);
//    }
//   return 0;
// }
// WAP to print even numbers and find their total sum of 1 to 20 
// WAP to take input of a number and print its multiplication table
// Homework
// WAP to input a number and find its factorial
// WAP to input a number and check if it is prime number or not
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
// Homework
// WAP to take input and print the reverse of it
// eg:if num=123
// output=321 
// WAP to count how many times code got executed
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
// WAP to print "try again and again"until user types the correct digit
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
// WAP to take a number and print its reverse value
// #include<stdio.h>
// int main(){
//   int num,reverse=0,rem;
//   printf("Enter a number");
//  scanf("%d",&num);

//  do
//  {
//   rem=num%10;
//   reverse=reverse*10+rem;

//   num=num/10;
//  } while (num!=0);
//  printf("Reverse is %d",reverse);
 
// }
// test this 

// WAP 
//  #include<stdio.h>
//   int main(){
//     int marks[5]={30,24,55,28,35};
//     for (int i = 0; i < 5; i++)
//     {
//       printf("Marks of student %d : %d\n",i+1,marks[i]);}
//       return 0;
//     }
//   WAP to take input of 5 students marks and print them
//   #include<stdio.h>
//   int main(){
//     int marks[5];
  
//     for (int i = 0; i < 5; i++)
//     {
//       printf("Enter marks of student %d :",i+1);
//       scanf("%d",&marks[i]);
//     }
//     printf("\n");
//     for (int i=0; i<5; i++){
//       printf("Marks of student %d : %d\n",i+1 , marks[i]);
//     }
//     return 0;
//   }
//   WAP to find total marks of  one studet in 5 subjects

// WAP to make an array of size 5 and print them in reverse order
// #include<stdio.h>
// int main(){
//   int ar[5],i;
// printf("Enter 5 number\n");
// for (int i=0;i<5;i++)
// {
//  scanf("%d",&ar[i]);
// }
// printf("Reversed order.\n");
// for(int i=4;i>=0;i--){
// printf("%d\n",ar[i]);
// }
// return 0;
// }
//  Create an array of size 6 and find the sum of index values only
// #include<stdio.h>
// int main();
// int 
// WAP to take input for size of an array and again take input value upto that number and find the smallest one
// WAP to input value and print the greatest one
//   #include<stdio.h>
//   int main(){
//     int size_arr, i;
//    printf("Enter the size of an array");
//    scanf("%d",&size_arr);
//   int arr[size_arr];
//   printf("Enter %d elements",size_arr);
//   for(int i=0;i<size_arr;i++){
//     scanf("%d",&arr[i]);

//   }
//  int largest_value=arr[0];
//  for ( i = 0; i < size_arr; i++){

 
//   if(a[i]>largest_value){
//  largest_value=a[i];

// }
// }
//   printf("Largest value is%d",largest_value);
  
//   return 0;
// }
// WAP to find the second largest number from an array
//  #include<stdio.h>
//  int main(){
//   int size_arr,i;
//   printf("Enter the size of an array:");
//   scanf("%d",&size_arr);
// printf("Enter %d elements:",size_arr);;
// int arr[size_arr];
// for (i=0;i<size_arr;i++){
//  scanf("%d",&arr[i]);
//  }

//  }

// WAP TO sort elements of an array in Ascending Order
// #include<stdio.h>
// int main(){
//   int size=4,i,j,temp;
//   int arr[4]={13,12,11,14};
//   for(i=0;i<size;i++){
//     for(j=i;j<size;j++){
//       if(arr[i]>arr[j]){
//         temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//       }
//     }
//    printf("After %d pass %d\n",i+1,arr[i]);
//   }
//   printf("After sorting:\n");
//   for(i=0;i<size;i++){
//     printf("%d\n",arr[i]);
//   }
// }

// #include<stdio.h>
// int main(){
// int num[4],i,j,temp;
// for(i=0;i<:i++)
// }
// WAP to store values in multidimensional array and print them
// #include<stdio.h>
// int main(){
//   int arr[2][3]={{30,28,52},{40,36,29}};
//   int j,i;
//   for(i=0;i<2;i++){
//     for( j=0;j<3;j++){
//       printf("%d ",arr[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// WAP to store values in multidimensional array
//  #include<stdio.h>
//  int main(){
//   int arr[5][4];
//   int i,j;
//   for(i=0;i<5;i++){
//   printf("Enter the marks of %d student\n",i+1);
//   for(j=0;j<4;j++){
//   printf("Subject %d",j+1);
//  scanf("%d",&arr[i][j]);
//   }
// }
//   for(i=0;i<5;i++){
//     printf("Marks of student%d\n",i+1);
//     for(j=0;j<4;j++){
//     printf("Subject %d:%d\n",j+1,arr[i][j]);
//     }

//   }

//  }
// WAP to input full name and display welcome"Full name"
// #include<stdio.h>
// int main(){
//   char name[5];
//   printf("Enter your full name:");    
//     fgets(name,5,stdin);
//   printf("Welcome:");
//  fputs(name,stdout);
  
//   }
// WAP to reverse a string and display it
// #include<stdio.h>
// int main(){
//   int i,j,count=0,temp;
//   char name[50];
//   printf("Enter a string:");
//   fgets(name,50,stdin);
//   for ( i = 0; name[i] != '\0'; i++)
//   {
//     count++;
//   }
//   for(i=count-1;i>=0;i--){
//     name[i]=temp;
//     name[i]=name[count-1];
//     name[count-i];
//   }
// for ( i = 0; i < count; i++)
// {
//   printf("%c",name[i]);
// }

// }
// WAP to check if two strings are same or not
// #include<stdio.h>
// int main(){
//   char name1[50]="Ram";
//   char name2[50]="Ram";
//   if (name1==name2)
//   {
//     printf("Same");
  
//   else{
//     printf("Not same");
//   }
//   printf("Memory address of name1=%d",name1);
//   printf("Memory address of name2+%d",name2);
// }
// // WAP to check the greatest string among three strings
//  #include<stdio.h>
//  #include<string.h>
//  int main(){
//  }
//  int len1,len2,len3;
//  char name1[50]="Ram";
//  char name2[50]="Ramesh";
//  char name3[50]="Sita";
//  len1=strlen(name1);
//  len2=strlen(name2);
//  len3=strlen(name3);
//   if (len1>len2 && len1>len3)
//   {
//     printf("String 1st is greatest");
//   }
//   else if(len2>len1 && len2>len3){
//     printf("Strinf 2nd is greater");
//   }
//   else{
//     printf("String 3rd is greater");
//   }
//  return 0;
// }
// WAP to check the greatest string among three strings usinng strlen
//   #include<stdio.h>
//   #include<string.h>
//   int main(){ 
//    int len1,len2,len3;
//     char name1[50]="Ram"; 
//     char name2[50]="Ramesh";
//     char name3[50]="Sita";
   
//     len1=strlen(name1);
//     len2=strlen(name2); 
//     len3=strlen(name3);   
//     if (len1>len2 && len1>len3)
//     {
//       printf("String 1st is greatest");
//     }
//     else if(len2>len1 && len2>len3){
//       printf("Strinf 2nd is greater");
//     }
//     else{
//       printf("String 3rd is greater");
//     }
//    return 0;
//   }
//   WAP to count number of vowles in a given string 
//    #include<stdio.h>
//     #include<string.h>  
//           int main(){
//             char str[100];
//             int i,vowlescount=0;
//             printf("Enter a string:");
//             fgets(str,100,stdin);
//            for(i= 0;str[i]!='\0';i++){
//               if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
//                 vowlescount++;
//               }
//             }
//             printf("Number of vowels in the string is %d",vowlescount);
//             return 0;

//           }
//   WAP to input name of 5 cities and display them
//    #include<stdio.h>
//    int main(){
//     char cities[5][50];
//     int i;
//     for(i=0;i<5;i++){
//       printf("Enter the name of city %d:",i+1);
//       fgets(cities[i],50,stdin);
//     }
//     printf("The entered cities are:\n");
//     for(i=0;i<5;i++){
//       printf("%s",cities[i]);
//     }
//     return 0;
//    }
//   WAP to check if a given string is palindrome or not
//   #include<stdio.h>
//   #include<string.h>
//   int main(){      
//     char str[100];   
//     int i,len,flag=1;  
//     printf("Enter a string:");
//     fgets(str,100,stdin);  
//     len=strlen(str)-1;  
//     for(i=0;i<len/2;i++){  
//       if(str[i]!=str[len-i-1]){  
//         flag=0;        
//         break;
//       }  
//     }  
//     if(flag==1){     
//       printf("The string is a palindrome");  
//     }      
//     else{  
//       printf("The string is not a palindrome");  
//     }
//     return 0;  
//   }      
//   WAP to print Hello world inside a print_hello function
//   #include<stdio.h>
//     int main(){
//       void print_hello();
//       print_hello();
//       return 0;
//     }

//  void print_hello(){
//   printf("Hello world\n");
//  }
// WAP to print numbers from 1 to 10 inside print_number function
//     #include<stdio.h>
//       int main(){
//         void print_number();
//         print_number();
//         return 0;
//       }   

//   void print_number(){  
//     for (int i = 1; i <= 10; i++){
//       printf("%d\n",i);
//     }
//   }
//   WAP to make metric convertor without function 
//    1.cm to meter
//    2.meter to km
//    3.km to meter
//    4.meter to cm
//     5.inch to feet
//     6.feet to inch
//  #include<stdio.h>
//     int main(){
//       int choice;
//       float value,converted_value;
//       printf("Metric Convertor Menu:\n");
//       printf("1. cm to meter\n");
//       printf("2. meter to km\n");
//       printf("3. km to meter\n");
//       printf("4. meter to cm\n");
//       printf("5. inch to feet\n");
//       printf("6. feet to inch\n");
//       printf("Enter your choice (1-6):");
//       scanf("%d",&choice);
//       printf("Enter the value to convert:");
//       scanf("%f",&value);
//       switch (choice){
//         case 1:
//           converted_value=value/100;
//           printf("%.2f cm = %.2f meter\n",value,converted_value);
//           break;
//         case 2:
//           converted_value=value/1000;
//           printf("%.2f meter = %.2f km\n",value,converted_value);
//           break;
//         case 3:
//           converted_value=value*1000;
//           printf("%.2f km = %.2f meter\n",value,converted_value);
//           break;
//         case 4:
//           converted_value=value*100;
//           printf("%.2f meter = %.2f cm\n",value,converted_value);
//           break;
//         case 5:
//           converted_value=value/12;
//           printf("%.2f inch = %.2f feet\n",value,converted_value);
//           break;
//         case 6:
//           converted_value=value*12;
//           printf("%.2f feet = %.2f inch\n",value,converted_value);
//           break;
//         default:
//           printf("Invalid choice!\n");
//           break;
//       }
//       return 0;
//     } 
// WAP to enter area in Aana Paisa and Dam and convert it to meter sqaure
//  #include<stdio.h>
//   int main(){
//     int aana,paisa,dam;
//     float total_sq_meter;
//    printf("Enter area in Aana Paisa and Dam:\n");
//     printf("Aana:");
//     scanf("%d",&aana);
//     printf("Paisa:");
//     scanf("%d",&paisa);
//     printf("Dam:");
//     scanf("%d",&dam); 
//     total_sq_meter=(aana*31.8)+(paisa*7.95)+(dam*21.39);
//     printf("Total area in square meter:%.2f\n",total_sq_meter);
//     return 0;
//   }
// WAP to add two numbers inside a function
// #include<stdio.h>
// int add(int a, int b);
// int main(){
//  int num1=4;
//  int num2=5;
//  int sum=add(num1,num2);
//  printf("Sum=%d",sum);
//   return 0;
// }
// int add(int a,int b){
//   return a+b;
// }

// WAP to built GTA game character creation using structure
//  #include<stdio.h>
//  #include<string.h>
//  struct Character{
//   char name[50];
//   char role[50];
//   int level;      
//   float health;
//   };  
//   int main(){
//     struct Character player1;
//     strcpy(player1.name,"John");
//     strcpy (player1.role,"Warrior");
//     player1.level=5;
//     player1.health=100.0;
//     printf("Character Details:\n");
//     printf("Name:%s\n",player1.name);
//     printf("Role:%s\n",player1.role);
//     printf("Level:%d\n",player1.level);
//     printf("Health:%.2f\n",player1.health);
//     return 0;
//   }
// WAP to add,subtract,multiply and divide two numbers inside funcitons
// #include<stdio.h>
// void add(float a,float b){
//   printf("Addition:%.2f\n",a+b);
// }
// void subtract(float a,float b){
//   printf("Subtraction:%.2f\n",a-b);
// }
// void multiply(float a,float b){
//   printf("Multiplication:%.2f\n",a*b);
// }
// void divide(float a,float b){
//   if(b!=0){
//     printf("Division:%.2f\n",a/b);
//   }
//   else{
//     printf("Error: Division by zero!\n");
//   }
// }
// int main(){
//   float num1,num2;
//   printf("Enter two numbers:");
//   scanf("%f%f",&num1,&num2);
//   add(num1,num2);
//   subtract(num1,num2);
//   multiply(num1,num2);
//   divide(num1,num2);
//   return 0;
// } 
// WAP to print Hello world using function and return value
// #include<stdio.h>
// int hello(){
//   printf("Hello world\n");
//   return 1;
// }
// int main(){
//    int num=hello();
//     printf("Value returned by hello function:%d\n",num);
//     return 0;
// } 
// WAP to print current time in milisecond
// #include<stdio.h>
// #include<time.h>
// int main(){
//   printf("Time in milisecond=%d",time(0));
//   return 0;

// }
//   // WAP to suggest a 4 digit random pin code
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

// #include<stdio.h>
// int add_num(int num1,int num2)
// {
//   int sum=num1+num2;
//  return sum;
// }
// int main(){
// int total=add_num(2,3);
// printf("Total=%d\n",total);
// int new_value=total*2;
// printf("After multiplying=%d",new_value);
// return 0;
// }
// WAP to calculate gross salary,tax and net salary using function
// #include<stdio.h>
// int calculate_salary(int days){
// int salary=1000*days;
// return salary;
// }
// int main(){
//   int gross_salary=calculate_salary(30);
//   printf("Gross salary=%d\n",gross_salary);
//   int tax=gross_salary*0.1;
//   printf("Tax amount=%d\n",tax);
//   int net_salary=gross_salary-tax;
//   printf("Net salary=%d\n",net_salary);
//   return 0;
// }
// WAP to input a number and print that number inside a funcion
//  #include<stdio.h>
//   void print_number(int num){
//     printf("The number is %d\n",num);
//   }
//  int main(){
//   int number;
//   printf("Enter a number:");
//   scanf("%d",&number);
//   print_number(number);
//   return 0;
//  }
// WAP to input a number and find its square and cube value inside two different function.
//  #include<stdio.h>
//  int sqaure(int num){
//   return num*num;
//  }
//  int cube(int num){
//   return num*num*num;
//  }
// int main(){
// int number;
// printf("Enter a number:");
// scanf("%d",&number);
// printf("Square=%d\n",sqaure(number));
// printf("Cube=%d\n",cube(number));
// return 0;
// } 
// WAP to input a number and check if its palindrome or not usign function
//  #include<stdio.h>
//   int is_palindrome(int num){
//     int reversed=0,original=num,rem;
//     while(num!=0){
//       rem=num%10;
//       reversed=reversed*10+rem;
//       num=num/10;
//     }
//     if(original==reversed){
//       return 1;
//     }
//     else{
//       return 0;
//     }
//   }
//  int main(){
//    int number;
//    printf("Enter a number:");
//    scanf("%d",&number);
//    if(is_palindrome(number)){
//     printf("The number is a palindrome\n");
//    }
//    else{
//     printf("The number is not a palindrome\n");
//    }
//    return 0;
//  }
// WAP to create an array of size 5 inside a funciton and find their whole sum inside a function
// #include<stdio.h>
// int sum_array(){
//   int arr[5],i,sum=0;
//   printf("Enter 5 numbers:\n");
//   for(i=0;i<5;i++){
//     scanf("%d",&arr[i]);
//     sum+=arr[i];
//   }
//   return sum;
// }     
// int main(){
//   int total=sum_array();
//   printf("Total sum=%d\n",total);
//   return 0;
// }
// WAP to input two numbers and then perform add,sub,mul,div,making functions and perform calculations inside a function calculation()
// #include<stdio.h>
//  int add(int a ,int b){
//     int sum;
//     sum=a+b;
//     printf("Sum=%d",sum);
//  return add;
// }
//  int sub(int a,int b){
//     int sub;
//  sub=a-b;
//  printf("Sub=%d",sub);
//  return sub;
//  }
// int mul(int a,int b){
//     int mul=a*b;
//     printf("Mul=%d",a*b);
// }
// void div(int a,int b){
//     float div=a/b;
//     printf("DIv=%2f",div);
// }
// int calculation(char ch,int a1,int b)
//     if(ch=='+'){
//  int add(int a,int b);
// }
// else if(ch=='-'){
//     int sub(int a,int b);
// }
// else if(ch==''*){
//     int mul(int a,int b);
// }
// else if (ch=='/'){
//  int div(int a,int b);
// }
// else{
//     printf("Invalid symbol");
// }
// int main(){
// char ch;
// int num1,num2;
// printf("Enter any two numbers: ");
// scanf("%d%d",&num1,&num2);
// printf("Enter operation symbol");
// scanf("%c",&ch);
// calculation(ch,num1,num2);
// return 0;
// }
//WAP to print a digit using function
    // #include<stdio.h>
    // int b=10;
    // void display(){
    //     int a=5;
    //     printf("a=%d\n",a);
    // } 
    // int main(){
    //     display();
    //     printf("b=%d",b);
    //     return 0;
    // }
// WAP to 
//  #include<stdio.h>
//  void display(){
//     static int count=0;
//     count++;
//     printf("count value=%d\n",count);
//  }
// int main(){
//     display();
//     display();
//     display();
//     return 0;
// }
//WAP to print number from 1 to 5 using reccursion function
//  #include<stdio.h>
//   void printNum(int n){
//     if(n>5){
//         return;
//     }
//     else{
//         printf("%d\n",n);
//         printNum(n+1);
//     }
//   }
//   int main(){
//     printNum(1);
//     return 0;
//   }
//WAP to print number from 5 to 1 using recursion function
//  #include<stdio.h>
//  void printNum(int n){
//     if(n<1){
//         return;
//     }
//     else{
//         printf("%d\n",n);
//         printNum(n-1);
//     }
//  }
//   int main(){
//     printNum(5);
//     return 0;
//  }
//WAP to print numbers from N to 1 using recursion function
//  #include<stdio.h>
//   void printnum(int n){
//     if(n<1){
//         return;
//     }
//     else{
//         printf("%d\n",n);
//         printnum(n-1);
//     }
//   }
// int main()
// {
// int n;
// printf("Enter from where to start");
// scanf("%d",&n);
// printnum(n);
// }
//WAP to print numbers from 1 to N using recursion function
//  #include<stdio.h>
//  void printNum(int n){
//     if(n<1){
//         return;
//     }
//     else{
//         printNum(n-1);
//         printf("%d\n",&n);
//     }
//  }
//  int main()
//     {
//     int n;
//     printf("Enter from where to start:");
//     scanf("%d",&n);
//     printNum(n);
//     }
//WAP to input and find factorial of the number using recursion function 
//    #include<stdio.h>
//    int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
//    }
//    int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     int factorial=fact(n);
//     printf("Factorial=%d\n",factorial); 
//    }
// WAP to find 2nd index value of fibonacci serise using recursion function
//  #include<stdio.h>
//   int fibo(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         return fibo(n-1)+(fibo(n-2));
//     }
//     }
    
//     int main(){
//     int n=2;
//     int result=fibo(n);
//     printf("Fibonacci value at index %d is %d\n",n,result);
//     return 0;
//     }
//WAP to find 1st to 5th index value of fibonacci series using recursion function using loop
// #include<stdio.h>
//  int fibo(int i){
//     if(i==0){
//         return 0;
//     }
//     else if(i==1){
//         return 1;
//     }
//     else{
//         return fibo(i-1)+(fibo(i-2));
//     }
//     }
    
//     int main(){
//     int i;
//     printf("Fibonacci series from index 0 to 5:\n");
//     for(i=0;i<6;i++){
//         printf("Fibonacci value at index %d is %d\n",i,fibo(i));
//     }
//     return 0;
//  }
//WAP to input index "N" and print its fibonacci series value using recursive function
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
    //     }
        
    //     int main(){
    //     int n;
    //     printf("Enter the index N to find its fibonacci value:");
    //     scanf("%d",&n);
    //     printf("Fibonacci value at index %d is %d\n",n,fibo(n));
    //     return 0;
    // }
    // WAP 
    // #include<stdio.h>
    // int main(){
    //     int a;
    //     int *p;
    //     p=&a;
    //     printf("Enter a number:");
    //     scanf("%d",p);
    //     printf(":%d\n",*p);
    //     printf("Value of a:%d\n",a);
    //    printf("Value of *p:%d\n",*p);
    //      return 0;
    // }
    // 
    // #include<stdio.h>
    // int main(){
    //     int a=10;
    //   float b=5.5;
    //   void *p;
    //     p=&b;
    //     printf("Value of a:%d\n",*(int*)p);
    //     p=&b;
    //     printf("Value of b:%.2f\n",*(float*)p);
    //     return 0;

   // } 

    // WAP
    // #include<stdio.h>
    // int main(){
    //     int a=5,b=2;
    //     int div_value=a/b;
    //     printf("Division value=%d\n",div_value);
        
    //     return 0;
    // }
    // WAP 
    // #include<stdio.h>
    // int main(){
    //     int a=5,b=2;
    //     float div_value=(float)a/b;
    //     printf("Division value=%.2f\n",div_value);
    //     return 0;
    // }
    //
    //  #include<stdio.h>
    //  int main(){
    //     int a=87;
    //     char ch;
    //     ch=(char)a;
    //     printf("Value of ch:%c\n",ch);
    //     return 0;   
    //  }
    //
    //
    //  #include<stdio.h>
    //  int main(){
    //     int a;
    //     int *p;
    //     int **q;
    //     q=&p;
    //     p=&a;
    //     printf("Enter a number");
    //     scanf("%d",q);
    //     printf("Value of a:%d\n",a);
    //     printf("Value of *p:%d\n",*p);
    //     printf("Value of **q:%d\n",**q);
    //     printf("Address of a:%p\n",&a);
    //     printf("Address stored in p:%p\n",&p);
    //     printf("Address stored in q:%p\n",&q);   
    //     return 0;
    //  }
    //DYNAMIC MEMORY ALLOCATION
    // WAP to input 5 numbers and display them using dynamic memory allocation
//     #include<stdio.h>
//     #include<stdlib.h>
//     int main(){
//         int *arr,i;
//         arr=(int*)malloc(5*sizeof(int));
//         printf("Enter 5 numbers:\n");
//         for(i=0;i<5;i++){
//             scanf("%d",&arr[i]);    
//     }
//     printf("The entered numbers are:\n");
//     for(i=0;i<5;i++){
//         printf("%d\n",arr[i]);
// }
//     free(arr);
//     return 0;
// }
//  WAP to input n numbers and find their sum using dynamic memory allocation
//  #include<stdio.h>
//  #include<stdlib.h>
//   int main(){
//     int n,i,sum=0;
//     int *arr;
//     printf("Enter the numbers:");    
//     scanf("%d",&n);
//     arr=(int*)malloc(n*sizeof(int));
//     printf("Enter %d numbers:\n",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//     }
//     printf("Sum of the numbers is %d\n",sum);
//     free(arr);
//     return 0;
// }
// WAP to explain realloc function
    // #include<stdio.h>   
    // #include<stdlib.h>  
    // int main(){  
    //     int *arr,i,n1,n2;  
    //     printf("Enter the number of elements:");  
    //     scanf("%d",&n1);  
    //     arr=(int*)malloc(n1*sizeof(int));  
    //     printf("Enter %d elements:\n",n1);  
    //     for(i=0;i<n1;i++){  
    //         scanf("%d",&arr[i]);  
    //     }  
    //     printf("The entered elements are:\n");  
    //     for(i=0;i<n1;i++){  
    //         printf("%d\n",arr[i]);  
    //     }  
    //     printf("Enter the new size of the array:");  
    //     scanf("%d",&n2);  
    //     arr=(int*)realloc(arr,n2*sizeof(int));  
    //     printf("Enter %d new elements:\n",n2);  
    //     for(i=0;i<n2;i++){  
    //         scanf("%d",&arr[i]);  
    //     }  
    //     printf("The new elements are:\n");  
    //     for(i=0;i<n2;i++){  
    //         printf("%d\n",arr[i]);  
    //     }  
    //     free(arr);  
    //     return 0;  
    // }   
    // WAP to store name,roll_no,age of a student using structure and dispalay them 
    //  #include<stdio.h>
    //  #include<string.h>
    //  struct Student{
    //     char name[50];
    //     int roll_no;
    //     int age;
    //  };
    //  int main(){
    //     struct Student std;
    //     std.roll_no=101;
    //     std.age=20;
    //     strcpy(std.name,"Ram Sharma");
    //    printf("Details of the student:\n");
    //    printf("Name:%s\n",std.name);
    //      printf("Roll No:%d\n",std.roll_no);
    //           printf("Age:%d\n",std.age);
    //      return 0;

    //  }
//WAP to input a name,roll_no,age of a student using structure and display then
//  #include<stdio.h>
//     #include<string.h>
//     int main(){
//         struct Student{
//             char name[50];
//             int roll_no;
//             int age;
//         };
//         struct Student std;
//         printf("Enter the name of the student:");
//         scanf("%s",std.name);
//         printf("Enter the roll number of the student:");
//         scanf("%d",&std.roll_no);
//         printf("Enter the age of the student:");
//         scanf("%d",&std.age);
//         printf("Details of the student:\n");
//         printf("Name:%s\n",std.name);
//         printf("Roll No:%d\n",std.roll_no);
//         printf("Age:%d\n",std.age);
//         return 0;
//     }
// WAP to input details of employee using structure and display them
    // #include<stdio.h>
    // #include<string.h>
    // struct Employee{
    //     int id;
    //     char name[50];
    //     int salary; 
    // };
    // int main(){
    //     struct Employee emp;
    //     printf("Enter employee ID:");
    //     scanf("%d",&emp.id);
    //     printf("Enter employee name:");
    //     scanf("%s",emp.name);
    //     printf("Enter employee salary:");
    //     scanf("%d",&emp.salary);
    //     printf("Employee Details:\n");
    //     printf("ID:%d\n",emp.id);
    //     printf("Name:%s\n",emp.name);
    //     printf("Salary:%d\n",emp.salary);
    //     return 0;
    // }
    // WAP to input details of book in a sturcture and display then
    //  #include<stdio.h>
    //     #include<string.h>
    //     struct Books{
    //         char title[100];
    //         char author[100];
    //         int pages;
    //     };
    //     int main(){
    //         struct Books book;
    //         printf("Enter the title of the book:");
    //         scanf("%s",book.title);
    //         printf("Enter the author of the book:");
    //         scanf("%s",book.author);
    //         printf("Enter the number of pages:");
    //         scanf("%d",&book.pages);
    //         printf("Book Details:\n");
    //         printf("Title:%s\n",book.title);
    // //         printf("Author:%s\n",book.author);
    //         printf("Pages:%d\n",book.pages);
    //         return 0;
    //     }
    // WAP to store details of  3 students(roll_no,name,age)and dosplay them
    //  #include<stdio.h>
    //  struct student{
    //     int roll_no;
    //     char name[50];
    //     int age;
    //  };
    //  int main(){
    //     struct student std[3];
    //     int i;
    //   printf("Enter details of 3 students:\n");
    //     for(i=0;i<3;i++){
    //         scanf("%d",&std[i].roll_no);
    //         scanf("%s",std[i].name);
    //         scanf("%d",&std[i].age);
    //     }
        // for(i=0;i<3;i++){
        //  printf("%d\t",std[i].roll_no);
        //  printf("%s\t",std[i].name);
        // printf("%d\t",std[i].age);
        //     printf("%d\t",std[i].roll_no);
        //     printf("%s\t",std[i].name);
         //     printf("%d\t",std[i].age);
        //     printf("\n");
        // }
    //     int y_age=std[0].age;
    //     for(i=0;i<3;i++){
    //         if(std[i].age<y_age){
    //             y_age=std[i].age;
    //         }
    //     }
    //     printf("The youngest student's age is %d\n",y_age);
    //     return 0;

    //  }
// WAP to store details of 5 employees and display the name of employee having highest salary
    //  #include<stdio.h>
    //  #include<string.h>
    //  #include<stdlib.h>
    //  struct Employee{
    //     char name[50];
    //     int salary;
        
    //  };
    //  int main(){
    //     int n;
    //     struct Employee *emp ;
    //     emp=(struct Employee*)malloc(n*sizeof(struct Employee));
    //     int i;
    //     printf("Enter number of employees:");
    //     scanf("%d",&n);
    //     printf("Enter details of %d employees:\n",n);
    //     for(i=0;i<n;i++){
    //         printf("Employee %d:\n",i+1);
    //         printf("Name:");
    //         scanf("%s",emp[i].name);
    //         printf("Salary:");
    //         scanf("%d",&emp[i].salary);
    //     }
    //     int max_salary=emp[0].salary;
    //     char highest_paid_employee[50];
    //     strcpy(highest_paid_employee,emp[0].name);   
    //     for(i=1;i<5;i++){
    //         if(emp[i].salary>max_salary){    
    //             max_salary=emp[i].salary;
    //             strcpy(highest_paid_employee,emp[i].name);
    //         }    
    //     }
    //     printf("tThe employee with the highest salary is %s with a salary of %d\n",highest_paid_employee,max_salary);
    //     return 0;
    //  }
    
        //nest struct test
            // #include<stdio.h>
            // struct student{
            //     int roll_no;
            //     char name[50];
            //     struct Birthdate{
            //         int dd,mm,yy;
            //     }dob;
            // };
            // int main(){
            //     struct student std;
            //     printf("Enter roll number:");
            //     scanf("%d",&std.roll_no);
            //     printf("Enter name:");
            //     scanf("%s",std.name);
            //     printf("Enter date of birth (dd mm yy):");
            //     scanf("%d%d%d",&std.dob.dd,&std.dob.mm,&std.dob.yy);
            //     printf("Student Details:\n");
            //     printf("Roll No:%d\n",std.roll_no);
            //     printf("Name:%s\n",std.name);
            //     printf("Date of Birth:%02d/%02d/%04d\n",std.dob.dd,std.dob.mm,std.dob.yy);
            //     return 0;
            // }
 // WAP to store detail of stduent (roll_no,name,address(city,zipcode/pincode))&display it
    // #include<stdio.h>
    // #include<string.h>
    // struct student{
    //     int roll_no;
    //     char name[50];
    //     struct Address{
    //         char city[50];
    //         int zipcode;
    //     }address;
    // };
    // int main(){
    //     struct student std;
    //     printf("Enter roll number:");
    //     scanf("%d",&std.roll_no);
    //     printf("Enter name:");
    //     scanf("%s",std.name);
    //     printf("Enter city:");
    //     scanf("%s",std.address.city);
    //     printf("Enter zipcode:");
    //     scanf("%d",&std.address.zipcode);
    //     printf("Student Details:\n");
    //     printf("Roll No:%d\n",std.roll_no);
    //     printf("Name:%s\n",std.name);
    //     printf("City:%s\n",std.address.city);
    //     printf("Zipcode:%d\n",std.address.zipcode);
    //     return 0;
    // }
    // WAP to pass a structure in a function and display the details of an student
    //  #include<stdio.h>
    //     #include<string.h>
    //        struct Student{
    //             int roll_no;
    //             char name[50];
    //             int age;
    //         };
    //         void display(struct Student std){
    //             printf("Student Details:\n");
    //             printf("Roll No:%d\n",std.roll_no);
    //             printf("Name:%s\n",std.name);
    //             printf("Age:%d\n",std.age);
    //         }
    //         int main(){
    //             struct Student std;
    //             printf("Enter roll number:");
    //             scanf("%d",&std.roll_no);
    //             printf("Enter name:");
    //             scanf("%s",std.name);
    //             printf("Enter age:");
    //             scanf("%d",&std.age);
    //             display(std);
    //             // printf("The details of students are:\n");
    //             // printf("Roll No:%d\n",std.roll_no);
    //             // printf("Name:%s\n",std.name);   
    //             // printf("Age:%d\n",std.age);
    //             return 0;
    //         }

    
    // #include<stdio.h>
    // #include<string.h>
    // struct Student{
    //     int roll_no;
    //     char name[50];
    //     int age;
    // };
    // int main(){
    //     struct Student std;
    //     struct Student *p;
    //     p=&std;
    //     printf("Enter roll number:");
    //     scanf("%d",&std.roll_no);
    //     printf("Enter name:");
    //     scanf("%s",std.name);
    //     printf("Enter age:");
    //     scanf("%d",&std.age);
    //     printf("Student Details:\n");
    //     printf("Roll No:%d\n",p->roll_no);
    //     printf("Name=%s\n",p->name);
    //     printf("Age=%d\n",p->age);
    //     return 0;
    // }
    //WAP to write "Ram" to a file name.txt
    //  #include<stdio.h>
    //  int main(){
    //     char ch;
    //     FILE *fp;
    //     fp=fopen("ram.txt","r");
    //     while(!feof(fp)){               //feof is used to check if the end of file has been reached. It returns a non-zero value if the end of file is reached, and zero otherwise.
    //         ch=fgetc(fp);
    //         printf("%c",ch);
    //     }
    //     fclose(fp);
    //     return 0;
    //  }

// WAP to enter your name to a file and display a message if it got executed and read it tooo
//  #include<stdio.h>
//  int main(){    
//     char name[50];
//     FILE *fp;
//     fp=fopen("name.txt","w");
//     printf("Enter your name:");
//     scanf("%s",name);
//     fprintf(fp,"%s",name);
//     fclose(fp);
//     printf("Name written to file successfully!\n");
//     return 0;
//}
// WAP to enter details of student in tu.txt and display it 
// Write
//  #include<stdio.h>
//  int main(){
//     char col_name[50]="Kathmandu University";
//     int i;
//     FILE*fp;
//     fp=fopen("tu.txt","w");
//     for(i=0;col_name[i]!='\0';i++){
//         fputc(col_name[i],fp);
//     }
//     fclose(fp);
//     }
 // Read
    //  #include<stdio.h>
    //  int main(){
    //     char ch;
        
    //     FILE*fp;
     
    //     if(fp=NULL){
    //         printf("No file found");
    //     }
    //     else{
    //     fp=fopen("tu.txt","r");
    //     while(!feof(fp)){
    //         ch=fgetc(fp);
    //         printf("%c",ch);
    //     }
    //     }
    //     fclose(fp);
    //  }
 
    // Append
    // #include<stdio.h>
    // int main(){
    //     char ch;
    //     char col_name[50]="Orchid";
    //     int i;
    //     FILE *fp;
    //     fp=fopen("tu.txt","a");
    //     if (fp==NULL)
    //     {
    //         printf("File not found");
    //     }
    //     else{
    //         for(i=0;col_name[i]!='\0';i++){
    //             fputc(col_name[i],fp);
    //         }
    //         printf("Appended Succesfully");
    //     }
    
    //    while(!feof(fp)){
    //     ch=fgetc(fp);
    //     printf("%c",ch);
    //    }
    //    fclose(fp);
    //    fp=fopen("tu.txt","r");
    //         while(!feof(fp)){
    //     ch=fgetc(fp);
    //     printf("%c",ch);
    //    }
    // }
//WAP to input your current address and state it in address.txt file and then append your permanent address to the file 
// and then append your permanent address to the file and check the no of vowels and consonants the file has
// #include<stdio.h>
// int main(){
//     char ch;
//     char str[100];
//     FILE *fp;
//     int i,vowlescount;
//     fp=fopen("address.txt","w");
//     printf("Enter your address:");
//     scanf("%s",&ch);
//      fprintf(fp,"%s",&ch);
//     fclose(fp);
//     fp=fopen("address.txt","a");
//     printf("Enter the new address:");
//     scanf("%s",&ch);
//     fprintf(fp,"%s",&ch);
//     fclose(fp);
//     fp=fopen("address.txt","r");
//     while(!feof(fp)){
//     for(i= 0;str[i]!='\0';i++){
//               if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
//                vowlescount++;
//               }
//             }
//             printf("Number of vowels in the string is %d",vowlescount);
//             fclose(fp);
//         }
//             return 0;

//         }

//for(i= 0;str[i]!='\0';i++){
//               if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
//                 vowlescount++;
//               }
//             }
//             printf("Number of vowels in the string is %d",vowlescount);
//             return 0;
//WAP to copy the content of tu.txt
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     int i;
//     char ch;
//     char uni[100]="Tribhuwan University";
//     fp=fopen("tu.txt","w+");
//     for(i=0;uni[i]!='\0';i++){
//         fputc(uni[i],fp);
//         fclose(fp);
//     }
//     fp=fopen("university.txt","a");
//     printf("Written sucessfully");
//     rewind(fp);
//     printf("Details of file");
//     while (!feof(fp))
//     {
//         ch=fgetc(fp);
//         printf("%c",ch);
//     }
//     fclose(fp);
//     return 0;
// }
// Program 2
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     int i;
//     char ch;
//     char caste[100]="\nLama\n";
//     fp=fopen("name.txt","r+");
//     printf("Detais of file:");
//     while (!feof(fp))
//     {
//         ch=fgetc(fp);
//         printf("%c",ch);
//     }
//     for(i=0;caste[i]!='\0';i++){
//         fputc(caste[i],fp);
//     }
//     printf("Written in file sucessfully ");
// }
// WAP to save data of 3 emoployees to a file data.txt
//  #include<stdio.h>
//  int main(){
//      FILE *fp;
//      fp=fopen("data.txt","w");
//      fprintf(fp,"Ram ktm 50000\n");
//      fprintf(fp,"Kabir Dhangadi 40000\n");
//      fprintf(fp,"Sandip Sarlahi 30000\n");
//      fclose(fp);
//  }
//WAP to find the no of lines from a file data.txt
// #include<stdio.h>
// int main(){
//     int line=0;
//     FILE *fp;
//     char ch;
//     fp=fopen("data.txt","r");
//     while(!feof(fp)){
//         ch=fgetc(fp);
//         if(ch=='\n'){
//             line++;
//         }
//     }
//     printf("No lines=%d",line);
//     fclose(fp);
// }
//WAP(modified)
//  #include<stdio.h>
//  int main(){
    
//     FILE *fp;
//     char ch;
//     char name[100],add[100];
//     int salary;
//     fp=fopen("data.txt","r");
//     while(!feof(fp)){
//         fscanf(fp,"%s %s %d",name,add,&salary);
//         printf("%s %s %d\n",name,add,salary);
//     }
//     fclose(fp);
//  }
//WAP to print the output without priting one extra line
//  #include<stdio.h>
//  int main(){
//     int line=0,count=0;
//     FILE *fp;
//     char ch;
//     char name[100],add[100];
//     int salary;
//     fp=fopen("data.txt","r");
//     while(!feof(fp)){
//         ch=fgetc(fp);
//         if(ch=='\n'){
//             line++;
//         }
//     }
//     rewind(fp);
//     while (count<line){
//         fscanf(fp,"%s %s %d",name,add,&salary);
//        printf("%s %s %d\n",name,add,salary);
//        count++;
//     }
//     fclose(fp);
//  }
//WAP to print detail of employee whose address is ktm from a file data.txt
//  #include<stdio.h>
//  #include<string.h>
//  int main(){
//     int line=0,count=0;
//     FILE *fp;
//     char ch;
//     char name[100],add[100];
//     int salary;
//     fp=fopen("data.txt","r");
//     while(!feof(fp)){
//         ch=fgetc(fp);
//         if(ch=='\n'){
//             line++;
//         }
//     }
//     rewind(fp);
//     while (count<line){
//         fscanf(fp,"%s %s %d",name,add,&salary);
//         if (strcmp(add,"ktm")==0)
//     {
//          printf("%s %s %d\n",name,add,salary);
//     }
//        count++;
//     }
    
//     fclose(fp); 

//  }
// WAP to input for 5 employees detail and store it in emp_data.txt.Print the detail of employee whose salary is greater than 20,000
//  #include<stdio.h>
//  #include<string.h>
//  int main(){
//     int line=0,count=0;
//     FILE *fp;
//     char ch;
//     char name[100],add[100];
//     int salary;
//     fp=fopen("data.txt","r");
//     while(!feof(fp)){
//         ch=fgetc(fp);
//         if(ch=='\n'){
//             line++;
//         }
//     }
// }

//WAP to store details of Employee(id,name,age)to a binary file
// #include<stdio.h>
// struct Employee
// {
//     int id;
//     char name[50];
//     int age;
// };
// int main(){
//     struct Employee.emp;
//     FILE*fp;
//     fp=fopen("Employee.dat","wb");
//     printf("Enter id,name and age of a employee:\n");
//     scanf("%d %s %d",emp.id,emp.name,emp.age);
//     fwrite(&emp,sizeof(emp),1,fp);
//     printf("Written in binary file sucessfully");
//     fclose(fp);
// }
// //
// #include<stdio.h>
// struct Employee{
//     int id;
//     char name[50];
//     int age;
// };
// void main(){
//     struct Employee emp;
//     FILE *fp;
//     fp=fopen("Employee.dat","rb");
//     fread(&emp,sizeof(emp),1,fp);
//     printf("Detail of employee is\n");
//     printf("ID=%d",emp.id);
//     printf("Name=%s",emp.name);
//     printf("Age=%d",emp.age);
//     fclose(fp);
// }
//
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char ch;
//     fp=fopen("tu.txt","r");
//     fseek(fp,1,SEEK_SET);
//     ch=fgetc(fp);
//     printf("%c",ch);
//     fclose(fp);
// }

// #include <stdio.h>
// #include <sys/stat.h>
// #include <sys/types.h>
// int main(){
//      char name[50]="RAM";
//     FILE *fp;
//     fp=fopen("paper.txt","w");
//     for ( i = 0; name[i]!='\0'; i++)
//     {
//      fputc(name[i],fp);
//     }
//     printf("Written in file successfully in file");
//     fclose(fp);

//     fp=fopen("paper.txt","r");
//     fseek(fp,-1,SEEK_END);
//     ch=fgetc(fp);
//     printf("%c",ch);
//     fclose(fp);
// }
//
// #include <stdio.h>
// #include <sys/stat.h>
// #include <sys/types.h>

// int main() {
//     // Create directory named "output"
//     int check = mkdir("output", 0777);

//     if (check == 0) {
//         printf("Directory created successfully.\n");
//     } else {
//         printf("Directory may already exist.\n");
//     }

//     // Now create a file inside that directory
//     FILE *fp = fopen("output/result.txt", "w");

//     if (fp == NULL) {
//         perror("Error creating file");
//         return 1;
//     }

//     fprintf(fp, "Hello! This file is inside the output folder.\n");
//     fclose(fp);

//     printf("File written successfully.\n");
//     return 0;
// }
//
// #include <stdio.h>
// #include <sys/stat.h>
// #include <sys/types.h>
// #include <errno.h>
// #include <string.h>
// #include <unistd.h>

// int main() {
//     char cwd[1024];

//     // Show where the program is running from
//     if (getcwd(cwd, sizeof(cwd)) != NULL) {
//         printf("Current working directory: %s\n", cwd);
//     } else {
//         perror("getcwd error");
//     }

//     // Try to create directory
//     int ret = mkdir("output", 0777);

//     if (ret == 0) {
//         printf("Directory created successfully.\n");
//     } else {
//         printf("mkdir failed: %s\n", strerror(errno));
//     }

//     // Try to create file inside it
//     FILE *fp = fopen("output/test.txt", "w");

//     if (fp == NULL) {
//         printf("fopen failed: %s\n", strerror(errno));
//         return 1;
//     }

//     fprintf(fp, "It works!\n");
//     fclose(fp);

//     printf("File written successfully.\n");
//     return 0;
// }
//
//
// #include <stdio.h>
// int main(){
//     int gd=DETECT,gm;
//     initigraph(&gd,&gm);
//     int max_x_coordinate=getmaxx():
//     int max_y_coordinate=getmaxy();
//     printf("Screen size=%d x %d\n",max_x_coordinate,max_y_coordinate);

// // }
// #include <sys/stat.h>
// #include <stdio.h>

// int main() {
//     struct stat st = {0};

//     if (stat("output/subfolder", &st) == -1) {
//         mkdir("output/subfolder", 0777);
//     }

//     FILE *fp = fopen("output/subfolder/file.txt", "w");
//     if(fp){
//         fprintf(fp, "Hello world!\n");
//         fclose(fp);
//     } else {
//         perror("File open failed");
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char *cwd = getenv("PWD");
//     if (cwd != NULL) {
//         printf("Current working directory: %s\n", cwd);
//     } else {
//         printf("Error retrieving current working directory.\n");
//     }
//     return 0;
// }
//  Macro 
// #include<stdio.h>
// #define num1 1 
// int main()
// {
//     printf("Number=%d\n",num1);
//     return 0;
// }
//
//  #include<stdio.h>
//  #define name "Orchid"
//  int main()
//  {
//     printf("Name=%s\n",name);
//     return 0;
//  }
//WAP to print area of circle using macro
// #include<stdio.h>
// #define PI 3.14
// int main(){
//     int r=5;
//     float area=PI*r*r;
//     printf("Area of circle with radius %d is %2f\n",r,area);
//     return 0;
// }
// WAP to input the required value and find area of cylinder.
//   #include<stdio.h>
//   #define PI 3.14
//   int main(){
//     int r,h;
//     printf("Enter the radius of the cylinder:");
//     scanf("%d",&r);
//     printf("Enter the height of the cylinder:");
//     scanf("%d",&h);
//     float area=2*PI*r*(r+h);
//     printf("Area of cylinder with radius %d and height %d is %2f\n",r,h,area);
//     return 0;
//   }
//ENUM
// #include<stdio.h>
// enum status{FAIL=0,PASS=1};
// int main(){
//     enum status result;
//   result=FAIL;
//   printf("The result is %d",result);
//   return 0;
// }
//Operator precedence and Associativity
//    #include<stdio.h>
//    int main(){
//     int result= 10*2+5-3;
//     printf("Result is %d\n",result);
//     return 0;
//    }
//Associativity
//left to right associativity
// #include<stdio.h>
// int main(){
//     int result=10-5-2;
//     printf("Result is %d\n",result);
//     return 0;
// }
//right to left associativity
// #include<stdio.h>
// int main(){
//     int num1=5;
//     int num2=10;
//     int num3=1;
// }
// 
// #include<stdio.h>
// int main(){
//     printf("Hello world");
//     return 0;
// }

 //  #include<stdio.h>
//   struct student
//   {
//     int roll_no;
//     char name[50];
//     char gender[20];
//     int age;
//   };
//   int main(){
//     struct student std[10];
//     //accessing file
//     FILE *fp;
//     int i;
//     //opening a file
//     fp=fopen("student.txt","w");
//     //Asking user to input details of students
//     printf("Enter the details of students:\n");
//     for(i=0;i<10;i++){
//         printf("Roll no=");
//         scanf("%d",&std[i].roll_no);
//         printf("Name=");
//         scanf("%s",std[i].name);
//         printf("Gender=");  
//         scanf("%s",std[i].gender);
//         printf("Age=");
//         scanf("%d",&std[i].age);
//         //Displaying the details of students in file 
//         fprintf(fp,"Roll no=%d\n",std[i].roll_no);
//         fprintf(fp,"Name=%s\n",std[i].name);
//         fprintf(fp,"Gender=%s\n",std[i].gender);
//         fprintf(fp,"Age=%d\n",std[i].age);
//         fprintf(fp,"-----------------------\n");
//     }
//     printf("Written in file sucessfully");
//   }
  //WAP to write a name in a file using putc
// #include<stdio.h>
// int main(){
//     char name[50]="Ram";
//     FILE *fp;
//     fp=fopen("name.txt","w");
//     int i;
//     for(i=0;name[i]!='\0';i++){
//         fputc(name[i],fp);
//     }
//     printf("Written in file successfully");
//     fclose(fp);
//     return 0;   
// }
