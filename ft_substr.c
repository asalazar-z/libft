/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 14:00:01 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/03 17:05:08 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			n;
	size_t			size;
	char			*str;

	if (!s)
		return (NULL);
	size = 0;
	n = ft_strlen(s);
	if (start >= n)
		size = 1;
	else if (len > n - start)
		size = n - start + 1;
	else
		size = len + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy (str, s + start, size);
	return (str);
}
