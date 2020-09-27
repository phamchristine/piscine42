/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 12:08:39 by chpham            #+#    #+#             */
/*   Updated: 2020/09/13 11:57:22 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_corner(int i, int x)
{
	if (i == 0)
		ft_putchar('A');
	else if (i == x - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_line(int i, int x)
{
	if (i == 0 || i == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x < 0 || y < 0)
		return ;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0 || j == y - 1)
				ft_corner(i, x);
			else
				ft_line(i, x);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
