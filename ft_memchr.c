/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:10:32 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/06 18:43:09 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	l;

	str = (unsigned char *)s;
	l = (unsigned char)c;
	while (n > 0)
	{
		if (*str == l)
			return (str);
		else
		{
			str++;
			n--;
		}
	}
	return (NULL);
}
