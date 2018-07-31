#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	while (k < i)
	{
		if (str[k] < 65 || str[k] > 90)
			return (0);
		else
			k++;
	}
	return (1);
}

int	main(void)
{
	char *str;

	char c[4] = {'S', 'A', 's'};
	str = c;
	printf("%d", ft_str_is_uppercase(str));
}