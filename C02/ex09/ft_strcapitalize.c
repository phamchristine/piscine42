/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:48:41 by chpham            #+#    #+#             */
/*   Updated: 2020/09/18 11:00:28 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
			if (! ((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
			(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
			(str[i - 1] >= '0' && str[i - 1] <= '9')))
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] = str[i] - 32;
					i++;
	}
	return (str);
}

int	 main(void)
{
	char str[] = "+- salu\nt, coPmme((nt tu vas ? 42mots qu{Ar}a+nte-deux; cinquAAante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
