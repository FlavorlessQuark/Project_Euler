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

int solution_math()
{
	int sum3;
	int sum5;
	int sum15;

	// sum3 = ((333 * 3) + 333 * 999) / 2;
	// sum5 = ((199 * 5) + 199 * 995) / 2;
	// sum15 = ((66 * 15) + 66 * 985) / 2;

	sum3 = 3 * (333 * (333 + 1))/2;
	sum5 = 5 * (199 * (199 + 1))/2;
	sum15 = 15 * (66 * (66 + 1))/2;
	return sum3 + sum5 - sum15;
}

int main(void)
{
	printf("Solution : %d\n", solution_regular());
	printf("Solution : %d\n", solution_math());
	return 0;
}
