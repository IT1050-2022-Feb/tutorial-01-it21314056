/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2,total;
    float avg;
    printf("Enter first mark: ");
    scanf("%d",&mark1);
    printf("First mark: %d ", mark1 );
    
    printf("\nEnter second mark: ");
    scanf("%d",&mark2);
    printf("Second mark: %d" , mark1 );

	total=mark1+mark2;
	printf("\nTotal marks: %d\n",total);
   
    avg= (float)(mark1+mark2)/2;

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d and %d is: %.2f",mark1,mark2,avg);

  return 0;
}

