#include<stdio.h>
void cube();
	int side,c;
main()
{
	cube();
}
void cube()
{
	printf("Enter a number\n");
	scanf("%d",&side);
	c=6*(side*side);
	printf("Area of cube %d",c);
	
}

