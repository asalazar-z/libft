/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 14:18:45 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/11 17:41:57 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_ptr(char const *s, char c)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && ((s[i + 1] == c || s[i + 1] == '\0')))
			n++;
		i++;
	}
	return (n);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	*ft_free_all(char **big, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(big[i]);
		i++;
	}
	free(big);
	return (NULL);
}

static char	*ft_return_word(char const *s, size_t *i, char c)
{
	size_t	n;
	char	*word;

	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	if (s[*i] == '\0')
		return (NULL);
	n = ft_wordlen(&s[*i], c);
	word = ft_substr(s, *i, n);
	*i = *i + n;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	**big;

	if (!s)
		return (NULL);
	n = ft_count_ptr(s, c);
	big = malloc((n + 1) * sizeof(char *));
	if (!big)
		return (NULL);
	j = 0;
	i = 0;
	while (j < n)
	{
		big[j] = ft_return_word(s, &i, c);
		if (!big[j])
			return (ft_free_all(big, j));
		j++;
	}
	big[j] = NULL;
	return (big);
}
