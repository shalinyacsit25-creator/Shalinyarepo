// // #include<stdio.h>
// // int main(){
// int n;
// printf("enter a number");
// scanf("%d,&n");

// return 0;
/*
 * Jhapa.c
 * Simple programs collection — updated to a single, working example.
 * This program reads an integer and prints its reverse.
 */

#include <stdio.h>

int main(void) {
  int num, original;
  int rev = 0, rem;

  printf("Enter an integer: ");
  if (scanf("%d", &num) != 1) {
    fprintf(stderr, "Invalid input.\n");
    return 1;
  }

  original = num;
  while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
  }

  printf("Reverse of %d is %d\n", original, rev);
  return 0;
}