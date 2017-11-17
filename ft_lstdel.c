/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sderet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:27:35 by sderet            #+#    #+#             */
/*   Updated: 2017/11/17 13:40:41 by sderet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*sup;
	t_list	*list;

	list = *alst;
	while (list->next != '\0')
	{
		ft_lstdelone(alst, del);
		sup = list;
		*alst = list->next;
		sup->next = NULL;
	}
}
