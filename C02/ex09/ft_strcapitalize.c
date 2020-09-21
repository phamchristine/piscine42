/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:48:41 by chpham            #+#    #+#             */
/*   Updated: 2020/09/21 13:57:01 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
		(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
		(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		i++;
	return (dest);
}

int		main(void)
{
	char	*a = "saLut, cOmMent tu Vas ? 42MOts quarAnte-Deux; cinQuante+eT+uN";
	char	b[100];

	ft_putstr(ft_strcpy(b, a));
	write(1, "\n", 1);
	ft_putstr(ft_strcapitalize(b));
	write(1, "\n", 1);
	return (0);
}

