#include<stdio.h>
#include<string.h>
main()
{
//	2d character array
	char name[5][10]={"john","smit","scoot","tiger","martin"};
	printf("\n %s",name[0]);
	printf("\n %s",name[1]);
	printf("\n %s",name[4]);
	
	printf("\n %c",name[0][2]);
	printf("\n %c",name[3][2]);

}

