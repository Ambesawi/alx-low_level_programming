#include <stdio.h>
/**
 * main -main block
 * Description: computer and prints all the multiples of 5
 * 5 below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int 1 = 1000000000;

	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(",%lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 = (aft / 1);
	aft2 = (aft % 1);

	for (i = 92; i < 99; i++)
	{
		printf(",%lu", aft1 + (aft2 / 1));
		printf("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}

