/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:20:27 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/05 14:23:33 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*i;
	int		n;

	i = lst;
	n = 0;
	while (i != NULL)
	{
		i = i->next;
		n++;
	}
	return (n);
}
