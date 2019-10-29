/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoncalv <cgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:00:31 by cgoncalv          #+#    #+#             */
/*   Updated: 2019/10/11 15:22:35 by cgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*fill_itoa(unsigned int n, char *ret, size_t i, BOOL is_neg)
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
	if (is_neg == TRUE)
		ret[0] = '-';
	return (ret);
}

char			*ft_itoa(int n)
{
	char			*ret;
	size_t			i;
	unsigned int	cpy_n;
	BOOL			is_negative;

	i = 0;
	if (n < 0)
		is_negative = TRUE;
	else
		is_negative = FALSE;
	cpy_n = (n > 0) ? n : -n;
	n = cpy_n;
	while (cpy_n > 9)
	{
		i++;
		cpy_n /= 10;
	}
	if (is_negative == TRUE)
		i++;
	if (!(ret = malloc(sizeof(char) * (i + 2))))
		return (NULL);
	return (fill_itoa(n, ret, i, is_negative));
}
