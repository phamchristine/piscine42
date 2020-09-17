/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:31:55 by chpham            #+#    #+#             */
/*   Updated: 2020/09/09 22:32:17 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)

{
	char ch;

	ch = 'a';
	while(ch <= 'z')

		{
		ft_putchar(ch);
		ch++;
		}
}
	int main()
{
	ft_print_alphabet();
	return (0);
}
