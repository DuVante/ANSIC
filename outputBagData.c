/* 
* outputBagData - function to dump to the screen a Bag parameter elements 
* to check data integrity
*
* Jesse Mattila
* CSCI 1533
* October 24, 2017
*
*/
#include "adt.h"


int outputBagData(Bag *b)
{
	printf("Bag Number: %ld\n", b.bagNumber);
	printf("Bag type: %c\n", b.bagType);
	printf("Bag Origin: %s\n", b.bagOrigin);
	printf("Bag Destination: %s\n", b.bagDestination);
	printf("Passenger number: %ld\n", b.bagPassenger);
	printf("Bag Volume: %f\n", b.bagVolume);
	printf("Bag Weight: %f\n", b.bagWeight);
	
	return 0;
}