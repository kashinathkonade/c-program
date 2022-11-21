#include<stdio.h>
int max(int i,int j)
{
	if(i>j)
	return i;
	else
	return j;
}
main()
{
	int x=16;
	int y=5;
	int m=max(x,y);
	printf("The max number%d",m);
//	with parameter and with return

}

