/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
2
int main() {
  int m1 , m2 , total ;
	float average ;
	
	printf ("Enter the first subject mark : ") ;
	scanf ("%d", &m1) ;
	
	printf ("Enter the last subject mark : ") ;
	scanf ("%d", &m2) ;
	
	total = m1 + m2 ;
	average = (float) total / 2.00 ;
	
	printf ("Average mark is %.2f", average) ;
  
  return 0;
}

