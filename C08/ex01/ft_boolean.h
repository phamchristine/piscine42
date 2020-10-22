/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <chpham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:35:58 by chpham            #+#    #+#             */
/*   Updated: 2020/10/21 17:35:58 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

#include <unistd.h>

# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
typedef int t_bool;
# define EVEN(nbr) (!(nbr % 2))
# define EVEN_MSG "I have an even number of arguments\n"
# define ODD_MSG "I have an odd number of arguments\n"
# define SUCCESS 0

#endif
