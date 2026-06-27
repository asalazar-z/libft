/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 13:15:49 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/11 16:05:50 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*org;
	unsigned char	*dst;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	org = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	if (org < dst)
	{
		while (n-- > 0)
			dst[n] = org[n];
	}
	else
	{
		while (i < n)
		{
			dst[i] = org[i];
			i++;
		}
	}
	return (dest);
}
