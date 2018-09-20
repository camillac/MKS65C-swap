#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// Create an array large enough to store 10 ints.
	int ray[10];
	int * rp = ray;
	int num;
	
	srand(time(NULL));

	// Populate the array with random values.
	// Set the last value in the array to 0.
	// Print out the values in this array
	for (num = 0; num < 9; num++) {
		*rp = rand();
		printf("ray #%d: %d\n", num, *rp);
		rp++;
	}
	//printf("test to make sure ray9 isnt ray8: %d\n", *rp);
	*rp = 0;
	printf("ray #%d: %d\n\n", num, *rp);
	
	// Create a separate array large enough to store 10 ints.
	int ray2[10];
	int * rp2 = ray2;
	
	// USING ONLY POINTERS (that is, do not use the array variables) do the following:
	// Populate the second array with the values in the first but in reverse order
	// Print out the values in the second array
	printf("Copycat Array\n");
	for (int counter = 0; counter < 10; counter++) {
		*rp2 = *rp;
		printf("ray2 #%d: %d\n", counter, *rp2);
		rp2++;
		rp--;
	}
}  
  
