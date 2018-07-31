#include <unistd.h>
#include <stdio.h> 

int ft_putchar(char c)
{
	return (0);
}

int	main(int args, char *argv[])
{
	int i;
	int j;
	int k;
	int z;
	char *temp;
	int size;

	while (size < args)
	{
		size++;
	}
	size--;
	while (i < size)
	{
		while (j < size)
		{
			if ((argv[i] > argv[j]) && (i <= j))
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		j++;
		i++;
	}
	while (z < args)
	{
		printf("\n%s", argv[z]);
		z++;
	}
	return (0);
}