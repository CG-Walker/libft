/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walker <walker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:50:48 by cgoncalv          #+#    #+#             */
/*   Updated: 2021/09/20 18:12:10 by walker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(void *content, t_list **chunk)
{
	t_list	*begin;
	t_list	*previous;
	t_list	*next;

	if ((*chunk)->content != content)
		begin = *chunk;
	else
		begin = (*chunk)->next;
	while (*chunk && (*chunk)->content != content)
		*chunk = (*chunk)->next;
	if ((*chunk)->content == content)
	{
		previous = (*chunk)->previous;
		next = (*chunk)->next;
		if ((*chunk)->previous)
			(*chunk)->previous->next = next;
		if ((*chunk)->next)
			(*chunk)->next->previous = previous;
		free(*chunk);
	}
	*chunk = begin;
}
