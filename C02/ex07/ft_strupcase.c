/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:38:37 by chpham            #+#    #+#             */
/*   Updated: 2020/09/21 13:55:05 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
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
	char	*a = "!#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	char	b[100];

	ft_putstr(ft_strcpy(b, a));
	write(1, "\n", 1);
	ft_putstr(ft_strupcase(b));
	write(1, "\n", 1);
	return (0);
}

