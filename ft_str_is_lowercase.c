/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 13:03:27 by jerchen           #+#    #+#             */
/*   Updated: 2018/07/30 13:03:30 by jerchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[k] < 97 || str[k] > 122)
			return (0);
		else
			k++;
	}
	return (1);
}

int	main(void)
{
	char *str;

	char c[4] = {'a', 'b', 'c'};
	str = c;
	printf("%d", ft_str_is_lowercase(str));
}
