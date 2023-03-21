#include  <stdio.h>

/**
*This code finds the  minimum number  in a gven set of array.
*Returns: 0
*/

int find_min(int num_array[], int length);

int main(void)
{
	int num_array[] = {3, 5, 62, 1, 4, 7, 8, 6, 9, 2, 0};
	int num_array2[] = {4, 5, 6, 9, 5 , 8, 1, 2, 4};
	

	int min1 = find_min(num_array,11);
	int min2 = find_min(num_array2,9);
	
	printf("Minimum number of min1 : %d\n", min1);
	printf("Minimum number of min2 : %d\n", min2);


	return (0);
}

int find_min( int num_array[], int length)
{
	int min;
	min = num_array[0];

	for (int i = 0; i < 11; i++)
	{
		if (num_array[i] < min)
		{
			min = num_array[i];
		}
	}

	return (min);
}
