
#include "stdio.h"
#include "stdlib.h"

int main(void)
{
	int i;

	i = 0;
	double	w[4];
	while (i < 4)
	{
		w[i] = rand() * 1.0 / RAND_MAX;
		while (w[i] != 1)
		{
			w[i] = w[i] + ((1 - w[i]) * 0.1);
		}
		printf("%d", w[i]);
		i++;
	}
	return(0);
}