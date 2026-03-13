//WAP to input a word and reverse it using string function
//  #include<stdio.h>
//  #include<string.h>
//  int main(){
//     char str[50],rev[50];
//     int len,i,j;
//     printf("Enter a string:");
//     fgets(str,50,stdin);
//     len=strlen(str);
//     j=0;
//     for(i=len-1;i>=0;i--){
//       rev[j]=str[i];
//       j++;
//     }
//     rev[j]='\0';
//     printf("Reversed string is :%s",rev);
//     return 0;
//  }
//WAP to input a word and reverse it without using string function
//  #include<stdio.h>
//  int main(){
//    char str[50];            
//     int i,j,count=0,temp;
//     printf("Enter a string:");
//     fgets(str,50,stdin);
//     for ( i = 0; str[i] != '\0'; i++)
//     {
//       count++;
//     }
//     count--;        
//     for(i=0;i<count/2;i++){
//       temp=str[i];
//       str[i]=str[count-i-1];
//       str[count-i-1]=temp;
//     }
//   printf("Reversed string is :%s",str);
//   return 0;
//  }
// WAP to input a string and check the frequency of a character in it
//   #include<stdio.h>
//   int main(){
//     char str[100],ch;
//     int i,frequency=0;
//     printf("Enter a string:");
//     fgets(str,100,stdin);
//     printf("Enter a character to find its frequency:");
//     scanf("%c",&ch);
//     for(i=0;str[i]!='\0';i++){
//       if(str[i]==ch){
//         frequency++;
//       }
//     }
//     printf("The frequency of '%c' in the given string is: %d\n",ch,frequency);
//     return 0;
//   }
// WAP to input a string and count number of vowels and consonants 
//   #include<stdio.h>
//     int main(){ 
//         char str[100];
//         int i,vowlescount=0,consonantcount=0;
//         printf("Enter a string:");
//         fgets(str,100,stdin);
//         for(i=0;str[i]!='\0';i++){
//             if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
//             if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
//                  str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
//                  vowlescount++;
//                  }
//                  else{
//                  consonantcount++;
//                  }
//              }
//              }
//              printf("Number of vowels in the string is %d\n",vowlescount);
//              printf("Number of consonants in the string is %d\n",consonantcount);
//              return 0;
    
       //  }
// WAP to input a string and check whether it is palindrome or not without using string function
//   #include<stdio.h>
//   int main(){
//     char str[100];
//     int i,j,count=0,flag=1,temp;
//     printf("Enter a string:");
//     fgets(str,100,stdin);
//     for ( i = 0; str[i] != '\0'; i++)
//     {
//       count++;
//     }
//     count--;        
//     for(i=0;i<count/2;i++){ 
//         if(str[i]!=str[count-i-1]){
//             flag=0;
//             break;
//         }
//         }
//     if(flag==1){
//         printf("The string is a palindrome");
//         }
//         else{
//         printf("The string is not a palindrome");
//         }   
//     return 0;
        
//   }
// WAP to ch eck the whether the input string is palindrome or not using string function
//  #include<stdio.h>
//     #include<string.h>
//         int main(){
//           char str[100],rev[100];
//           int len,i,j,flag=1;
//           printf("Enter a string:");
//           fgets(str,100,stdin);
//           len=strlen(str);
//           j=0;
//           for(i=len-1;i>=0;i--){
//             rev[j]=str[i];
//             j++;
//           }
//           rev[j]='\0';
//           for(i=0;i<len;i++){
//             if(str[i]!=rev[i]){
//               flag=0;
//               break;
//             }
//           }
//           if(flag==1){
//             printf("The string is not a palindrome");
//           }
//           else{
//             printf("The string is  a palindrome");
//           }
//           return 0;
//         }
// WAP to input name of 5 cities and sort them in ascending order
//   #include<stdio.h>
//     #include<string.h>
//         int main(){
//             char cities[5][50],temp[50];
//             int i,j;
//             for(i=0;i<5;i++){
//             printf("Enter the name of city %d:",i+1);
//             fgets(cities[i],50,stdin);
//             }
//             for(i=0;i<5-1;i++){
//             for(j=i+1;j<5;j++){
//                 if(strcmp(cities[i],cities[j])>0){
//                 strcpy(temp,cities[i]);
//                 strcpy(cities[i],cities[j]);
//                 strcpy(cities[j],temp);
//                 }
//             }
//             }
//             printf("Cities in ascending order:\n");
//             for(i=0;i<5;i++){
//             printf("%s",cities[i]);
//             }
//             return 0;
//         }
//         // WAP to explain the concept of buffer overflow using fgets()and gets()
       //   #include<stdio.h>
       //   int main(){
       //      char str1[5],str2[5];
       //      printf("Taking input from gets()\n");
       //      printf("Enter string containing atleast 5 characters:");
       //    gets(str1);
       //    printf("Taking inputs from fgets()\n");
       //    printf("Enter string containing atleast 6 characters:");
       //    fgets(str2,5,stdin);
       //    printf("Output from gets is:%s");
       //    puts(str1);
       //    printf("Output from fgets is:%s");
       //    fputs(str2,stdout);
       //    return 0;
       //   }
       /*Project
In this project we will store the detsils of 24 students and find the highest and lowest age student and display them in rectangle
1.Roll no
2.Name
3.Address
4.Age
5.Gender
*/
  #include<stdio.h>
       #include<string.h>
struct student{
       int roll_no;
       char name[50];
       char address[100];   
       int age;
       char gender[30];
};
int main(){
    struct student std[10];
    int i;
     FILE *fp;
        fp=fopen("student.txt","w");
       // printf("Enter the details of 10 students:\n");
       // for(i=0;i<10;i++){
      //     printf("Student %d:\n",i+1);
     //     printf("Roll no:\n");
    //     scanf("%d",&std[i].roll_no);
       // printf("Name:");
       //scanf("%s",std[i].name);
 // printf("Address:");
  // scanf("%s",std[i].address);
         // printf("Age:");
       // scanf("%d",&std[i].age);}
       // printf("Gender:");              
       // scanf("%s",std[i].gender );
//           fprintf(fp,"Roll no=%d\n",std[i].roll_no); 
//         fprintf(fp,"Name=%s\n",std[i].name);
//         fprintf(fp,"Address=%s\n",std[i].address);
//         fprintf(fp,"Age=%d\n",std[i].age);
//         fprintf
                                   