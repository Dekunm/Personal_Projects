#include <stdio.h>
#include <stdlib.h>
 
int find_max(int  array[], int length);


int main(void)
{
	int myarry[] = {8,3,8,2,9,3,5,6,6,9};

	int max = find_max(myarry,10);

	printf("max: %d\n", max);
	return 0;
}

int find_max(int array[], int length)
{
	int max = array[0];

	for (int i = 0; i < length; i++)
	{
		if (array[i] > max)
		{
			max =  array[i];
		}
	}

	return (max);
}
