/*
* Program to declare and use a baag structure. Using only automatic memory
* initially, then introduce dynamically allocated, (heap memory)..
*
* Jesse Mattila
* CSCI 1533
* October 24, 2017
*
*/

#include "adt.h"

int main() 
{
	Bag b1; /* declaration via struct label */
	struct b2; /* declaration via struct name */
	Bag b3[3];
	
	b1.bagNumber = 2010;
	b2.bagNumber = 2011;
	b3[0].bagNumber = 2012;
	
	printf("Bag number b1: %ld\n", b1.BagNumber);
	printf("Bag number b2: %ld\n", b2.BagNumber);	
	printf"Bag number b3[0]: %ld\n", b3[0].bagNumber);
	
	/* now lets populate a structure */
	printf("Enter value for b1.bagNumber: ");
	scanf("%ld",&b1.bagNumber);
	printf("Bag number b1: %ld\n", b1.BagNumber);
	
	b2 = getBagData();
	
	return 0;
}