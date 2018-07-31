#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 32)
		{
			str[i] = 
		}
		i++;
	}

	putchar(str);
}