/*  
*	
*
*
*/


#include "adt.h"

int main()
{
	Bag b1;		/* Declaration via struct label */
	struct bag b2; /* Declaration via struct name */
	Bag *b3; /* pointer variable, declaration that b3 wil hold an address */
	
	Bag *b4[10];
	
	/* lets allocate some heap memory in which to store for b3 */
	b3 = malloc(sizeof(Bag));
	
	/* first lets get the data into a struct by calling getBagData */
	b2 = getBagData();
	
	/* we can populate fields of the structure on the heap */
	
	b3->bagNumber = b2.bagNumber;
	b3->bagType = b2.bagType;
	strcopy(b3->bagOrigin, b2.bagOrigin;);
	strcopy(b3->bagDestination, b2.bagDestination;);
	b3->bagPassenger = b2.bagPassenger;
	b3->bagVolume = b2.bagVolume;
	b3->bagWeight = b2.bagWeight;

	
	
	int i = outputDynBag(b3);
	
	free(b3); 
	for(int i = 0; i<10; i++)
	{
		b4[i] = malloc(sizeof(Bag));
	}
	for(int i=0; i<10; i++)
	{
		printf("bag number: %ld\n", b4[i]->bagNumber);
	}
	
	//printf("bag number on the heap is: %d\n",b3->bagNumber);
	
	return 0;

}