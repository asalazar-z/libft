/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 13:45:39 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/06 18:55:14 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;
	char			*str;

	str = (char *)s;
	a = (unsigned char)c;
	while (*str != '\0' && *str != a)
		str++;
	if (*str != a)
		return (NULL);
	return (str);
}
