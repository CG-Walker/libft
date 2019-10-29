/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoncalv <cgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:45:52 by cgoncalv          #+#    #+#             */
/*   Updated: 2019/10/18 15:42:37 by cgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return ((unsigned char)(str1)[i] - (unsigned char)(str2)[i]);
		i++;
	}
	if (i == n)
		i--;
	return ((unsigned char)(str1)[i] - (unsigned char)(str2)[i]);
}
