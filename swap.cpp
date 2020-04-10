#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping value of a: %d",a);
	printf("\nAfter swapping value of b: %d",b);
}
