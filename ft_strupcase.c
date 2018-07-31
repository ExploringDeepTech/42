/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:10:48 by jerchen           #+#    #+#             */
/*   Updated: 2018/07/31 13:10:50 by jerchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
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
		if (str[k] >= 97 && str[k] <= 122)
		{
			str[k] = str[k] - 32; 
		}
		k++;
	}
	printf("%s", str);
	return (c);
}

int		main(void)
{
	char *str = "i like to eat";
	printf("%s", ft_strupcase(str));
	return (0);
}
