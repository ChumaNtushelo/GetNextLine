/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 07:20:13 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/22 09:01:09 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_len(int n)
{
	int	i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*fresh;
	size_t	len;
	size_t	res;

	res = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_len(n);
	if (n < 0)
	{
		res = -n;
		len++;
	}
	if (n == 0)
		return (ft_strdup("0"));
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	fresh[++len] = '\0';
	fresh[--len] = res % 10 + '0';
	while (res /= 10)
		fresh[--len] = res % 10 + '0';
	if (n < 0)
		fresh[0] = '-';
	return (fresh);
}
