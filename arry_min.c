#include  <stdio.h>

/**
*This code finds the  minimum number  in a gven set of array.
*Returns: 0
*/

int main(void)
{

	int num_array[] = {3, 5, 62, 1, 4, 7, 8, 6, 9, 2, 4};
	int min = num_array[0];

	for (int i = 0; i < 11; i++)
	{
		if (num_array[i] < min)
		{
			min = num_array[i];
		}
	}
	printf("minimum number is: %d\n", min);
	return (0);
}
