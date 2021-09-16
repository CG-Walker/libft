/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoncalv <cgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:05:24 by cgoncalv          #+#    #+#             */
/*   Updated: 2021/09/16 17:43:26 by cgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd(char *s1, char const *s2)
{
	char	*ret;
	size_t	size_s1;
	size_t	size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (0);
	ret = malloc(sizeof(char) * (size_s1 + size_s2) + 1);
	if (!(ret))
		return (NULL);
	ft_memcpy(ret, s1, size_s1);
	ft_memcpy(&ret[size_s1], s2, size_s2 + 1);
	free(s1);
	return (ret);
}
