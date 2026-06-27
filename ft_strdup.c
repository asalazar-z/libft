/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:15:01 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/05 20:25:23 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*dest;

	n = ft_strlen(s1) + 1;
	dest = malloc (n * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, n);
	return (dest);
}
