/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:54:13 by chpham            #+#    #+#             */
/*   Updated: 2020/09/14 19:10:00 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')			
			i++;
		else
		{
			i++;
			return (0);
		}
	}
	return (1);
}

int		main(void)
{
	char a[] = "??,";
	printf("%d", ft_str_is_numeric(a));
	return (0);
}
