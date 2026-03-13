// #include<stdio.h>
// int main(){
//    int i;
//    for(i=1;i<=10;i++){
   
//       printf("Hello World\n");
//    }
//    return 0;
// }

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=10;i=i+2){
//         printf("%d\n",i);
//     }
//     return 0;
// }
//  #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=100;i=i+2){
//         printf("%d\n",i);
//     }
// }
//  #include<stdio.h>
//  int main(){
//     int num,i,A;
//     printf("Enter a number");
//     scanf("%d",&num);
//     for (i = 1; i <=10; i++)
//     {
//         A=num*i;
//         printf("%d\n",A);
//     }

//     return 0;
//  }
// #include<stdio.h>
// int main(){
//     int num,i;
//     printf("Enter a number");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){

//         printf("%d\n",i);
// }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,i;
//     int flag=0;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     if (n==1)
//     {
//         printf("The number is not prime nor composite\n");
        
//     }
//     for(i=2;i<=n-1;i++){
//         if(n%i==0){
//             printf("The number is composite\n");
//             flag=1;
//             break;
//         }
       
//     }   
//     if(flag==0 && n==!1 ){
//         printf("The number is prime\n");
//     }
//     return 0;
// }
     
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=100;i=i+2){
//         printf("%d\n",i);
//     }
//     return 0;
// }
//
    // #include<stdio.h>
    // int main(){
    //     int i; 
    //     for(i=1;i;i=i+1){
    //         if(i%2==0)
    //         continue;
    //     }
    //     printf("%d\n",i);
    //     return 0;
    // }
    //
   
        // #include<stdio.h>
        // int main(){
        //     int n,i,j,m;
        //     printf("Enter number of rows:");
        //     scanf("%d",&n);
        //     // printf("Enter number of columns:");
        //     // scanf("%d",&m);
        //     for(i=1;i<=n;i++){
        //         for(j=i;j<=n;j++){
        //             printf("* ");
        //         } 
        //    printf("\n");
            
        //     }
        //     return 0;
        // }
        //  #include<stdio.h>
        //  int main(){
        //     int i;
        //     for(i=1;i<=5;i++){
        //         printf("* ");
        //     }
        //     return 0;
        //  }
       
        // #include<stdio.h>
    //     int main(){
    //         int i,j;
    //         for(i=1;i<=5;i++){
    //             for(j=i;j<=5;j++){
    //                 printf(" ");
    //             }
    //             printf("\n");  
    //     }
    //     for (i = 1; i <= 5; i++)
    //     {
    //         for(j=1;j<=i;j++){
    //             printf("* ");
    //         }
    //         printf("\n");
    //     }
        


    // return 0;
    // }
        //  #include<stdio.h>
        //  int main(){
        //     int i,j;
        //     for(i=1;i<=5;i++){
        //         // for(j=i;j<=5;j++){
        //             printf("* ");
        //         }
        //         printf("\n");
        //     }
        // //  }
        // #include<stdio.h>
        // int main(){
        //     int i,j;
        //     for(i=5;i>=1;i--){
        //         for(j=1;j<=i;j++){
        //             printf("* ");
        //         }
        //         printf("\n");
        //     }
        // }
            
    //  #include<stdio.h>
    //  int main(){
    //     int a[10];
    //     for(int i=0;i<10;i++){
    //         printf("Enter the marks of %d student\n",i+1);
    //         scanf("%d",&a[i]);  
    //         if (a[i]>100)
    //         {
    //             printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    //             i--; 
    //         }
            
    //     }
    //     printf("\n");   
    //     for(int i=0;i<10;i++){
    //         printf("Marks of student %d : %d\n",i+1,a[i]);
    //     }
    //     return 0;
    //  }
      

    // #include<stdio.h>
    // int main(){
    //     int a=10;
    //     printf("Value of a:%d\n",a+1);
    //     return 0;
    // }
    // #include<stdio.h>
    // int main(){
    //     int a[]={10,20,30,40,50};
    //     printf("%d",a[4]);
    //     return 0;
    // }
    
    // #include<stdio.h>
    // int main(){
    //     int i,n,a[n];
    //     printf("Enter the number of students who passed:");
    //     scanf("%d",&n);
    //     for(i=0;i<n;i++){
    //         printf("Enter the marks of %d students:",i+1);
    //         scanf("%d",&a[i]);
    //     }
    //     for(i=0;i<n;i++){
    //         printf("Marks of student %d: %d\n",i+1,a[i]);
    //     }

    // }
    //  #include<stdio.h>
    //  #include<math.h>
    //    int main(){
    //     int a,b;
    //     printf("Enter the number whhose square you want to find:");
    //     scanf("%d",&a);
    //     printf("How much power you want to find:");
    //     scanf("%d",&b);
    //     printf("Result: %f\n",pow(a,b));
    //     return 0;

    //    }