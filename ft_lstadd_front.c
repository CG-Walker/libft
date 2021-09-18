/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walker <walker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:05:28 by cgoncalv          #+#    #+#             */
/*   Updated: 2021/09/18 16:33:10 by walker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst == NULL || new == NULL)
		return ;
	if (*alst == NULL)
	{
		(*alst) = new;
		(*alst)->previous = NULL;
	}
	else
	{
		ft_lstfirst(*alst)->previous = new;
		new->next = *alst;
		*alst = new;
	}
}
