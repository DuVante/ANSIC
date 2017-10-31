/* Function to populate bag data type , getBagData
* 
* function is of Bag type and returns Bag
*
*
* Jesse Mattila
* CSCI 1533
* October 24, 2017
*
*/

struct bag getBagData() {

	Bag lb;
	
	printf("Enter bag number: ");
	scanf("%ld",&lb.bagNumber);
	printf("Enter bag type (A->F): ");
	scanf(" %c",&lb.bagType);
	printf("Enter origin terminal: ");
	scanf("%s",lb.bagOrigin);
	lb.bagOrigin[3] = '\0';
	printf("Enter bag destination terminal: ")
	scanf("%s",lb.bagDestination);
	lb.bagDestination[3] = '\0';
	printf("Enter bag passenger number: ")
	scanf("%ld",&lb.bagPassenger);
	printf"Enter bag volume: ")
	scanf("%f",lb.bagVolume);
	printf("Enter bag weight in pounds: ");
	scanf("%f",&lb.bagWeight);
	
	return lb;
	
	}
	
	/* getBagData */
	