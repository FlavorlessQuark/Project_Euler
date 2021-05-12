#include "stdio.h"

int find_sum()
{
	int n1;
	int n2;
	int sum;
	int tmp;

	n1 = 2;
	n2 = 0;
	sum = 0;
	while (n1 < 4000000)
	{
		sum += n1;
		tmp  = n2;
		n2 = n1;
		n1 = 4 * n1 + tmp;
	}
	return sum;
}

int main(void)
{
	printf(" Sum %d\n", find_sum());
	return 0;
}

