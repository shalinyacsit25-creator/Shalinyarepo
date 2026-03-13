//WAP to create an array of size 5 and display them
    // #include<stdio.h>
    // int main(){
    // int arr[5],i;
    // printf("Enter 5 number\n");
    // for (int i=0;i<5;i++)
    // {
    // scanf("%d",&arr[i]);
    // }
    // printf("The entered numbers are:\n");
    // for(int i=0;i<5;i++){
    // printf("%d\n",arr[i]);
    // }
    // return 0;
    // }
   //WAP to count even and odd elements in an array
    // #include<stdio.h>
    // int main(){
    //     int arr[5],i,even_count=0,odd_count=0;
    //     printf("Enter 5 numbers\n");
    //     for(i=0;i<5;i++)
    //     {
    //         scanf("%d",&arr[i]);
    //     }
    //     for(i=0;i<5;i++)
    //     {
    //         if(arr[i]%2==0)
    //             even_count++;
    //         else
    //             odd_count++;
    //     }
    //     printf("Even numbers: %d\n",even_count);
    //     printf("Odd numbers: %d\n",odd_count);
    //     return 0;
    // }
    //WAP to find the second largest and second smallest elements in an array
    // #include<stdio.h>
    // int main(){
    //   int size_arr,i,j,temp;
    //   printf("Enter the size of an array:");
    //   scanf("%d",&size_arr);
    // printf("Enter %d elements:",size_arr);;
    // int arr[size_arr];
    // for (i=0;i<size_arr;i++){
    //     scanf("%d",&arr[i]);
    //     }               
    // for(i=0;i<size_arr;i++){
    //     for(j=i+1;j<size_arr;j++){
    //       if(arr[i]>arr[j]){
    //         temp=arr[i];
    //         arr[i]=arr[j];
    //         arr[j]=temp;
    //       }
    //     }
    //   }
    //   printf("Second smallest element is:%d\n",arr[1]);             
    //     printf("Second largest element is:%d\n",arr[size_arr-2]);
    // }
// //WAP to sort an array of size n using bubble sort
//  #include<stdio.h>
//     int main(){     
//         int size_arr,i,j,temp;
//         printf("Enter the size of an array:");
//         scanf("%d",&size_arr);  
//         printf("Enter %d elements:",size_arr);;
//         int arr[size_arr];
//         for (i=0;i<size_arr;i++){
//             scanf("%d",&arr[i]);
//             }
//         for(i=0;i<size_arr-1;i++){
//             for(j=0;j<size_arr-i-1;j++){
//               if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//               }
//             }
//           }
//           printf("Sorted array in ascending order:\n");         
//             for(i=0;i<size_arr;i++){
//                 printf("%d\n",arr[i]);
//             }
//     }
//WAP to merge two arrays into third array
    // #include<stdio.h>
    // int main(){
    // int size1,size2,i,j;
    // printf("Enter the size of first array:");
    // scanf("%d",&size1);
    // int arr1[size1];
    // printf("Enter %d elements for first array:\n",size1);
    // for(i=0;i<size1;i++){
    //     scanf("%d",&arr1[i]);
    // }
    // printf("Enter the size of second array:");
    // scanf("%d",&size2);
    // int arr2[size2];
    // printf("Enter %d elements for second array:\n",size2);
    // for(i=0;i<size2;i++){
    //     scanf("%d",&arr2[i]);
    // }
    // int merged_size=size1+size2;
    // int merged_arr[merged_size];
    // for(i=0;i<size1;i++){
    //     merged_arr[i]=arr1[i];
    // }
    // for(j=0;j<size2;j++){
    //     merged_arr[i+j]=arr2[j];
    // }
    // printf("Merged array elements are:\n");
    // for(i=0;i<merged_size;i++){
    //     printf("%d\n",merged_arr[i]);
    // }
    // return 0;
    // }
    //WAP to copy one array into another array
    // #include<stdio.h>
    // int main(){     
    //     int size_arr,i;
    //     printf("Enter the size of an array:");
    //     scanf("%d",&size_arr);  
    //     printf("Enter %d elements:",size_arr);;
    //     int arr1[size_arr];
    //     for (i=0;i<size_arr;i++){
    //         scanf("%d",&arr1[i]);
    //         }
    //     int arr2[size_arr];
    //     for(i=0;i<size_arr;i++){
    //         arr2[i]=arr1[i];
    //     }
    //     printf("Copied array elements are:\n");         
    //       for(i=0;i<size_arr;i++){
    //           printf("%d\n",arr2[i]);
    //       }
    // }
    // WAP to insert elements in an array at a given position
//   #include<stdio.h>
//     int main(){ 
//         int size_arr,i,position,new_element;
//         printf("Enter the size of an array:");
//         scanf("%d",&size_arr);  
//         printf("Enter %d elements:",size_arr);;
//         int arr[size_arr+1];
//         for (i=0;i<size_arr;i++){
//             scanf("%d",&arr[i]);
//             }
//         printf("Enter the position to insert new element (1 to %d):",size_arr+1);
//         scanf("%d",&position);
//         printf("Enter the new element to insert:");
//         scanf("%d",&new_element);
//         for(i=size_arr;i>=position;i--){
//             arr[i]=arr[i-1];
//         }
//         arr[position-1]=new_element;
//         printf("Array after insertion:\n");         
//           for(i=0;i<size_arr+1;i++){
//               printf("%d\n",arr[i]);
//           }
//     }
//WAP to seperate even and  odd numbers from an array
// // #include<stdio.h>
// // int main(){
//     int size_arr,i,j=0,k=0;
//     printf("Enter the size of an array:");
//     scanf("%d",&size_arr);                                              
//     printf("Enter %d elements:",size_arr);;
//     int arr[size_arr];
//     for (i=0;i<size_arr;i++){
//         scanf("%d",&arr[i]);
//         }
//     int even_arr[size_arr],odd_arr[size_arr];
//     for(i=0;i<size_arr;i++){
//         if(arr[i]%2==0){
//             even_arr[j]=arr[i];         
//             j++;
//         }       
//         else{
//             odd_arr[k]=arr[i];
//             k++;
//         }       
//     }
//     printf("Even numbers are:\n");         
//       for(i=0;i<j;i++){     
//             printf("%d\n",even_arr[i]);
//         }   
//     printf("Odd numbers are:\n");         
//       for(i=0;i<k;i++){     
//             printf("%d\n",odd_arr[i]);
//         }   
// }
//WAP to transpose a matrix
//  #include<stdio.h>
//  int main(){
//     int rows,cols,i,j;
//     printf("Enter number of rows:");
//     scanf("%d",&rows);
//     printf("Enter number of columns:");
//     scanf("%d",&cols);
//     int matrix[rows][cols],transpose[cols][rows];
//     printf("Enter elements of the matrix:\n");
//     for(i=0;i<rows;i++){
//       for(j=0;j<cols;j++){
//          scanf("%d",&matrix[i][j]);
//       }
//     }
//     for(i=0;i<rows;i++){
//       for(j=0;j<cols;j++){
//          transpose[j][i]=matrix[i][j];
//       }
//     }
//     printf("Transposed matrix is:\n");
//     for(i=0;i<cols;i++){
//       for(j=0;j<rows;j++){
//          printf("%d ",transpose[i][j]);
//       }
//       printf("\n");
//     }
//     return 0;
//  }
