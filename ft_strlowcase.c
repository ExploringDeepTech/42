char	*ft_strlowcase(char *str)
{
	int i;
	int k;
	char *c = "k";

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (k < i)
	{
		if (str[k] >= 65 && str[k] <= 90)
		{
			str[k] = str[k] + 32; 
		}
		k++;
	}
	printf("%s", str);
	return (c);
}

int		main(void)
{
	char *str = "i like to eat";
	printf("%s", ft_strlowcase(str));
	return (0);
}