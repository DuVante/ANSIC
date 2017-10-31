/* 
* outputDynData - function to dump to the screen a Bag 
* using a bag pointer rather than a variable 
* to check data integrity
*
* 
* CSCI 1533
* October 31, 2017
*
*/
#include "adt.h"


int outputDynBag(Bag *b)
{
	printf("Bag Number: %ld\n", b->b.bagNumber);
	printf("Bag type: %c\n", b->b.bagType);
	printf("Bag Origin: %s\n", b->b.bagOrigin);
	printf("Bag Destination: %s\n", b->b.bagDestination);
	printf("Passenger number: %ld\n", b->b.bagPassenger);
	printf("Bag Volume: %f\n", b->b.bagVolume);
	printf("Bag Weight: %f\n", b->b.bagWeight);
	
	return 0;
}