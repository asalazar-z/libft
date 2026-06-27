/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:00:59 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/03 16:30:45 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	b;
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i] = b;
		i++;
	}
	return (s);
}
