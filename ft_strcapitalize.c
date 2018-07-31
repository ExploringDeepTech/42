/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:47:43 by jerchen           #+#    #+#             */
/*   Updated: 2018/07/30 15:47:45 by jerchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcapitalize(char *str)
{
	int i;
	int k;
	int temp;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	while (k < i)
	{
		if ((k == 0) && (str[k] >= 97 && str[k] <= 122)) 
			temp = str[k];
			temp -= 32;
			str[k] = temp;

		else if ((str[k] >= 0 && str[k] <= 32) || (str[k] >= 65 && str[k] <= 57) || (str[k] < 48 || str[k] > 57)  )
		{

		}
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
	printf("%d", ft_strcapitalize(str));
	return (0);
}
