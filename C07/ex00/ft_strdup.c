/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 22:53:54 by chpham            #+#    #+#             */
/*   Updated: 2020/10/01 14:47:49 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		ft_strlen(char *src)
{
	int i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *new;
	int i;
	int j;

	i = 0;
	j = ft_strlen(src);
	if(!(new = malloc(sizeof(char) * j + 1)))
		return (0);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h>

int		main(void)
{
	char *a;

	a = "Hello";
	printf("%s", ft_strdup(a));
	return (0);
}
