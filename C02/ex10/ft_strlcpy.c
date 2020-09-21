/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:50:39 by chpham            #+#    #+#             */
/*   Updated: 2020/09/21 13:57:22 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (src[j] && j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
		return (i);
	}
	if (size == 0)
		return (i);
	return (i);
}

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		ft_putnbr(INT_MIN / 10);
		ft_putchar(-(INT_MIN % 10) + '0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

#include <string.h>

int		main(void)
{
	char		*a = "Hello world!";
	char		b[100] = {'a', 'b', 'c'};

	ft_putstr(a);
	write(1, ": ", 2);
	ft_putnbr(ft_strlen(a));
	write(1, "\n", 1);
	ft_putstr("dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr("With size 0: ");
	ft_putnbr(ft_strlcpy(b, a, 0));
	ft_putstr(" - dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr("With size 3: ");
	ft_putnbr(ft_strlcpy(b, a, 3));
	ft_putstr(" - dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr("With size 20: ");
	ft_putnbr(ft_strlcpy(b, a, 20));
	ft_putstr(" - dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	strlcpy(b, "abc", sizeof(b));
	ft_putstr("\nSame thing with official strlcpy:\n");
	ft_putstr(a);
	write(1, ": ", 2);
	ft_putnbr(ft_strlen(a));
	write(1, "\n", 1);
	ft_putstr("dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr("With size 0: ");
	ft_putnbr(strlcpy(b, a, 0));
	ft_putstr(" - dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr("With size 3: ");
	ft_putnbr(strlcpy(b, a, 3));
	ft_putstr(" - dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr("With size 20: ");
	ft_putnbr(strlcpy(b, a, 20));
	ft_putstr(" - dest = ");
	ft_putstr(b);
	write(1, "\n", 1);
	return (0);
}


