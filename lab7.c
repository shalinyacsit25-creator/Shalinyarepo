//WAP to enter two numbers and add them using pointer
// #include <stdio.h>

// int main() {
//     int num1, num2, sum;
//     int *a, *b;

    
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);

   
//     a = &num1;
//     b = &num2;

//     sum = *a + *b;

//     printf("Sum of %d and %d is: %d\n", *a, *b, sum);

//     return 0;
// }
//WAP to create an array of size 5 and find the largest element in an array using pointers
// #include <stdio.h>
// int main() {
//     int arr[5];
//     int *a;
//     int i, largest;
//     printf("Enter 5 numbers:\n");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }
//     a = arr;
//     largest = *a; 
//     for(i = 1; i < 5; i++) {
//         if(*(a + i) > largest) {
//             largest = *(a + i);
//         }
//     }
//     printf("The largest element is: %d\n", largest);
//     return 0;
// }
//WAP to input N numbers in an array and reverse an array using pointers
// #include <stdio.h>
// int main() {
//     int N;
//     printf("Enter the size of the array: ");
//     scanf("%d", &N);
//     int arr[N];
//     int *a = arr;               
//     int *ptr_start = a;         
//     int *ptr_end = a + N - 1;   
//     int temp;

//     printf("Enter %d numbers:\n", N);
//     for(int i = 0; i < N; i++) {
//         scanf("%d", a + i);   
//     }
//    while(ptr_start < ptr_end) {
//         temp = *ptr_start;
//         *ptr_start = *ptr_end;
//         *ptr_end = temp;
//         ptr_start++;
//         ptr_end--;
//     } 
//     printf("Reversed array:\n");
//     for(int i = 0; i < N; i++) {
//         printf("%d ", *(a + i));  
//     }
//     printf("\n");
//     return 0;
// }
//WAP to dynamically allocate memory for n integers usibng pointers,store values and display them
// #include <stdio.h>
// #include <stdlib.h>  // Needed for malloc and free

// int main() {
//     int n;
//     printf("Enter the number of integers: ");
//     scanf("%d", &n);

//     // Dynamically allocate memory for n integers
//     int *a = (int*)malloc(n * sizeof(int));
//     if(a == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     int *ptr = a;  // Use ptr to traverse

//     // Input values using pointer
//     printf("Enter %d integers:\n", n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", ptr + i);  // pointer arithmetic
//     }

//     // Display values using pointer
//     printf("The entered integers are:\n");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));  // dereference pointer
//     }
//     printf("\n");

//     // Free the dynamically allocated memory
//     free(a);

//     return 0;
// }
//WAP 
// #include <stdio.h>
// #include <string.h>

// // Define the structure
// struct Student {
//     int id;
//     char name[50];
//     int marks;
// };

// int main() {
//     // Create a variable of type struct Student
//     struct Student s1;

//     // Input student details
//     printf("Enter student ID: ");
//     scanf("%d", &s1.id);

//     printf("Enter student name: ");
//     // Use space before %50[^\n] to skip leftover newline
//     scanf(" %s[^\n]", s1.name);

//     printf("Enter student marks: ");
//     scanf("%d", &s1.marks);

//     // Display student details
//     printf("\n--- Student Details ---\n");
//     printf("ID: %d\n", s1.id);
//     printf("Name: %s\n", s1.name);
//     printf("Marks: %d\n", s1.marks);

//     return 0;
//   }
//WAP to store and display the results of N students
// #include <stdio.h>

// // Define the structure
// struct Student {
//     int id;
//     char name[50];
//     float marks;
// };

// int main() {
//     int N;
//     printf("Enter the number of students: ");
//     scanf("%d", &N);

//     struct Student students[100]; // Assuming max 100 students

//     // Input details for each student
//     for (int i = 0; i < N; i++) {
//         printf("\nEnter details for student %d:\n", i + 1);

//         printf("ID: ");
//         scanf("%d", &students[i].id);

//         printf("Name: ");
//         scanf(" %s[^\n]", students[i].name); // Space before % to skip newline

//         printf("Marks: ");
//         scanf("%f", &students[i].marks);
//     }

//     // Display all student details
//     printf("\n--- Student Results ---\n");
//     for (int i = 0; i < N; i++) {
//         printf("\nStudent %d:\n", i + 1);
//         printf("ID: %d\n", students[i].id);
//         printf("Name: %s\n", students[i].name);
//         printf("Marks: %.2f\n", students[i].marks);
//     }

//     return 0;
//}
//WAP to find and display the student with highest marks using structure

// #include <stdio.h>

// // Define the structure
// struct Student {
//     int id;
//     char name[50];
//     float marks;
// };

// int main() {
//     int N;
//     printf("Enter the number of students: ");
//     scanf("%d", &N);

//     struct Student students[100]; // Static array, max 100 students

//     // Input details for each student
//     for (int i = 0; i < N; i++) {
//         printf("\nEnter details for student %d:\n", i + 1);

//         printf("ID: ");
//         scanf("%d", &students[i].id);

//         printf("Name: ");
//         scanf(" %s[^\n]", students[i].name);

//         printf("Marks: ");
//         scanf("%f", &students[i].marks);
//     }

//     // Find student with highest marks
//     int maxIndex = 0; // Assume first student has highest marks
//     for (int i = 1; i < N; i++) {
//         if (students[i].marks > students[maxIndex].marks) {
//             maxIndex = i;
//         }
//     }

//     // Display the student with highest marks
//     printf("\n--- Student with Highest Marks ---\n");
//     printf("ID: %d\n", students[maxIndex].id);
//     printf("Name: %s\n", students[maxIndex].name);
//     printf("Marks: %.2f\n", students[maxIndex].marks);

//     return 0;
// }
//WAP to pass a structure to a function and display its members
// #include <stdio.h>

// // Define the structure
// struct Student {
//     int id;
//     char name[50];
//     float marks;
// };

// //Function to display a student's details
// void displayStudent(struct Student s) {
//     printf("\n--- Student Details ---\n");
//     printf("ID: %d\n", s.id);
//     printf("Name: %s\n", s.name);
//     printf("Marks: %.2f\n", s.marks);
// }

// int main() {
//     struct Student s1;

//     // Input student details
//     printf("Enter student ID: ");
//     scanf("%d", &s1.id);

//     printf("Enter student name: ");
//     scanf(" %s[^\n]", s1.name); // space before % to skip newline

//     printf("Enter student marks: ");
//     scanf("%f", &s1.marks);

//     // Pass the structure to the function
//     displayStudent(s1);

//     return 0;
// }
//WAP to store student details using a nested structure
// #include <stdio.h>

// // Define a nested structure for Date of Birth
// struct Date {
//     int day;
//     int month;
//     int year;
// };

// // Define the Student structure with nested Date
// struct Student {
//     int id;
//     char name[50];
//     float marks;
//     struct Date dob;  // Nested structure
// };

// int main() {
//     struct Student s1;

//     // Input student details
//     printf("Enter student ID: ");
//     scanf("%d", &s1.id);

//     printf("Enter student name: ");
//     scanf(" %s[^\n]", s1.name); // space before % to skip newline

//     printf("Enter student marks: ");
//     scanf("%f", &s1.marks);

//     // Input date of birth
//     printf("Enter date of birth (dd mm yyyy): ");
//     scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

//     // Display student details
//     printf("\n--- Student Details ---\n");
//     printf("ID: %d\n", s1.id);
//     printf("Name: %s\n", s1.name);
//     printf("Marks: %.2f\n", s1.marks);
//     printf("Date of Birth: %02d/%02d/%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);

//     return 0;
// }
//WAP to use a pointer to structure to read and display student details
// #include <stdio.h>

// // Define the structure
// struct Student {
//     int id;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student s1;
//     struct Student *ptr;   // Pointer to structure

//     ptr = &s1;  // Pointer stores address of structure variable

//     // Input student details using pointer
//     printf("Enter student ID: ");
//     scanf("%d", &ptr->id);

//     printf("Enter student name: ");
//     scanf(" %s[^\n]", ptr->name);   // No & needed for string

//     printf("Enter student marks: ");
//     scanf("%f", &ptr->marks);

//     // Display student details using pointer
//     printf("\n--- Student Details ---\n");
//     printf("ID: %d\n", ptr->id);
//     printf("Name: %s\n", ptr->name);
//     printf("Marks: %.2f\n", ptr->marks);

//     return 0;


// }
