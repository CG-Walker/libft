/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:00:31 by cgoncalv          #+#    #+#             */
/*   Updated: 2021/05/26 16:55:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*fill_itoa(unsigned int n, char *ret, size_t i, t_bool is_neg)
{
	if (n == 0)
		ret[0] = '0';
	ret[i + 1] = '\0';
	while (n > 0)
	{
		ret[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (is_neg == True)
		ret[0] = '-';
	return (ret);
}

char			*ft_itoa(int n)
{
	char			*ret;
	size_t			i;
	unsigned int	cpy_n;
	t_bool			is_negative;

	i = 0;
	if (n < 0)
		is_negative = True;
	else
		is_negative = False;
	cpy_n = (n > 0) ? n : -n;
	n = cpy_n;
	while (cpy_n > 9)
	{
		i++;
		cpy_n /= 10;
	}
	if (is_negative == True)
		i++;
	if (!(ret = malloc(sizeof(char) * (i + 2))))
		return (NULL);
	return (fill_itoa(n, ret, i, is_negative));
}
