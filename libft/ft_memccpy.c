/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 08:47:21 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/17 09:36:10 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;
	unsigned char	c2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	c2 = (unsigned char)c;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == c2)
		{
			dst2[i] = src2[i];
			i++;
			return (dst2 + i);
		}
		i++;
	}
	return (NULL);
}
