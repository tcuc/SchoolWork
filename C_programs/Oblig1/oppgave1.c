//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"

int main()
{
	// Del C)
	printf("del C)");
	int sum=0;
	for(int teller=10;teller<=25;teller++)
		sum+=teller;
	
	printf("%d",sum);
	
	// del B)
	printf("del B)");
	int tall=2;
	
	if(tall%2)
		printf("tall er oddetall:%d",tall);
	else
		printf("tallet er liketall:%d",tall);
	
	
	// del A)
	printf("del A)"); 
	for(int teller=20;teller>=10;teller--)
	{
		printf("%d\n",teller);
	}
}
