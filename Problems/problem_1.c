#include "stdio.h"
#include "time.h"

int	solution_regular() // This would not work if the upper limit was higher...
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < 1000)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	return sum;
}

int main(void)
{
	printf("Solution : %d\n", solution_regular());
	return 0;
}
