// standard libares and application definitions-- adt example

// application specific definitions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// bag definition -- adt
typedef struct bag{
	
	long bagNumber;
	char bagType;
	char bagOrigin[4];
	char bagDestination[4];
	long bagPassenger;
	float bagVolume;
	float bagWeight;
	
}Bag;
/*
* Function prototype for getBagData function
*/

struct bag getBagData();
	
int outputBagData(struct bag);	

/* Function prototype for dynamically allocated bag */
int outputDynBag(Bag *);


