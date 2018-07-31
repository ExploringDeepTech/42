/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:44:37 by jerchen           #+#    #+#             */
/*   Updated: 2018/07/30 15:44:38 by jerchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	while (k < i)
	{
		if (str[k] < 97)
			return (0);
		else if (str[k] > 122)
			return (0);
		else
			k++;
	}
	return (1);
}

int	main(void)
{
	char *str;

	char c[3] = {'b', 'a', 'e'};
	str = c;
	printf("1 or 0? %d", ft_str_is_lowercase(str));
	return (0);
}
