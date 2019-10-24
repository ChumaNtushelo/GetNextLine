/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:05:09 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/17 14:54:50 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c2;

	i = 0;
	str = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == c2)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}
