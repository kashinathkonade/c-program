#include<stdio.h>
int Armstrong();
main()
{
	
	Armstrong();

}
int Armstrong()
{
	int n,r,sum=0,t;
	printf("Enter a number: ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(t==sum)
	{
		printf("Is a Armstrong number");
	}
	else
	{
		printf("is not Armstrong number");
	}
}

