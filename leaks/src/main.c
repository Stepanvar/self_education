
#include "stdio.h"
#include "stdlib.h"
#include "../submake/ft_pwr2.h"

int main()
{
	char *str;
	int	i;

	i = 5;
	i = ft_pwr2(i);
	str = "Hello my friend!"; //(char *) malloc(sizeof(char) * 10);
	printf("%d", i);
	return (0);
}