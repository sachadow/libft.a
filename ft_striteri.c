/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sderet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:20:35 by sderet            #+#    #+#             */
/*   Updated: 2017/11/15 17:58:56 by sderet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t a;

	if (s == 0)
		return ;
	if (f == 0)
		return ;
	a = 0;
	while (s[a] != '\0')
	{
		f(a, &(s[a]));
		a++;
	}
}