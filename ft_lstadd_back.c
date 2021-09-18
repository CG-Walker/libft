/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walker <walker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:41:20 by cgoncalv          #+#    #+#             */
/*   Updated: 2021/09/17 13:06:45 by walker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	if (*alst != NULL)
	{
		new->previous = ft_lstlast(*alst);
		ft_lstlast(*alst)->next = new;
	}
	else
		*alst = new;
}
