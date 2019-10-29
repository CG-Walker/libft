/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoncalv <cgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:48:30 by cgoncalv          #+#    #+#             */
/*   Updated: 2019/10/10 19:04:08 by cgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (needle[0] == haystack[i])
		{
			while (needle[j] == haystack[i + j]
			&& haystack[i + j] && (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char*)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
