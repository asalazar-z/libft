/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrsala <andrsala@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:01:07 by andrsala          #+#    #+#             */
/*   Updated: 2026/06/06 18:57:09 by andrsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	long	num;
	int		i;

	num = n;
	i = 0;
	if (num < 0)
	{
		num = -1 * num;
		i = 1;
	}
	else if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	long	num;

	len = ft_count_digits(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	num = n;
	if (num < 0)
		num = -1 * num;
	str[len] = '\0';
	i = len - 1;
	while (i > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	if (n < 0)
		str[i] = '-';
	else
		str[i] = (num % 10) + '0';
	return (str);
}
