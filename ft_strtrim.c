/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 14:11:23 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/08 14:08:47 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	size_t			i;
	size_t			j;
	size_t			size;

	if (!s1 || !set)
		return (NULL);
	size = 0;
	i = 0;
	while (s1[i] != '\0' && ft_check_set(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_check_set(s1[j - 1], set) == 1)
		j--;
	if (i >= j)
		size = 1;
	else
		size = j - i + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + i, size);
	return (str);
}
