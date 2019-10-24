/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:58:23 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/22 09:48:07 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d2;
	size_t s2;
	size_t b;

	d2 = 0;
	while (dst[d2] != '\0')
		d2++;
	s2 = 0;
	while (src[s2] != '\0')
		s2++;
	if (dstsize <= d2)
		s2 += dstsize;
	else
		s2 += d2;
	b = 0;
	while (src[b] != '\0' && d2 + 1 < dstsize)
	{
		dst[d2] = src[b];
		d2++;
		b++;
	}
	dst[d2] = '\0';
	return (s2);
}
