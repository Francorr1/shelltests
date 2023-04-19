#include "main.h"
/**
 *
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%s", (av[i]));
		i++;
	}
	printf("\n");
	return (0);
}
