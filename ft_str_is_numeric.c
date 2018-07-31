#include <stdio.h>
int	ft_str_is_numeric(char *str)
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
		if (str[k] < 48 || str[k] > 57)
			return (0);
		else
			k++;
	}
	return (1);
}

int	main(void)
{
	char *str;

	char c[4] = {'4', '8', '3'};
	str = c;
	printf("%d", ft_str_is_numeric(str));
}
