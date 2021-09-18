/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walker <walker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:14:10 by cgoncalv          #+#    #+#             */
/*   Updated: 2021/09/18 16:49:53 by walker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SPACES " \t\v\f\r\n"

static size_t	check_spaces(const char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] && SPACES[j])
	{
		if (str[i] == SPACES[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

long	ft_atoi(const char *str)
{
	long	ret;
	int		sign;
	size_t	i;

	ret = 0;
	sign = 1;
	i = check_spaces(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]) == True)
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (sign * ret);
}
