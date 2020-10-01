/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 09:18:26 by chpham            #+#    #+#             */
/*   Updated: 2020/10/01 15:34:06 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_sep_inside(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_size_words(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_count_words(char *str, char *charset)
{
	int		length;
	int		i;
	int		done;

	length = 0;
	i = 0;
	done = 0;
	while (str[i])
	{
		while (str[i] && ft_sep_inside(charset, str[i]) == 0)
		{
			if (!done)
				length++;
			done++;
			i++;
		}
		if (ft_sep_inside(charset, str[i]) == 1)
			i++;
		done = 0;
	}
	return (length);
}

char	**ft_split_bis(char *str, char *charset, char **result)
{
	int		i;
	int		j;
	int		k;
	int		lig;

	i = 0;
	lig = 0;
	if (!(result = malloc((ft_count_words(str, charset) + 1) * sizeof(char *))))
		return (NULL);
	while (str[i] && lig < ft_count_words(str, charset))
	{
		k = 0;
		while (str[i] && ft_sep_inside(charset, str[i]) == 1)
			i++;
		j = i;
		while (str[i] && ft_sep_inside(charset, str[i]) == 0)
			i++;
		if (!(result[lig] = malloc((i - j + 1) * sizeof(char))))
			return (NULL);
		while (j < i)
			result[lig][k++] = str[j++];
		result[lig++][k] = 0;
	}
	result[lig] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char **result;

	result = NULL;
	if (str == NULL || charset == NULL)
		return (NULL);
	result = ft_split_bis(str, charset, result);
	return (result);
}

int		main(int ac, char **av)
{
	//char str[] = "----helloehel-----hele-eheke";
	//char charset[] = "";
	(void)ac;
	char **tab = ft_split(av[1], av[2]);
	while (tab != NULL && *tab)
	{
		printf("%s\n", *tab);
		tab++;
	}
	return (0);
}
