/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:39:43 by chpham            #+#    #+#             */
/*   Updated: 2020/09/12 22:13:19 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_corner(int i, int x, int j, int y)
{
	if (i == 0 || i == x - 1 || (j == y - 1 && i == 0) || (i == x - 1 && j == y - 1))
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	ft_line(int i, int x)
{
	if (i == 0 || i == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (x < 0 || y < 0)
		return ;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			if (b == 0 || b == y - 1)
				ft_corner(a, x, b, y);
			else
				ft_line(a, x);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
