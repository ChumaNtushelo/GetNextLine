/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:49:43 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/05 19:29:32 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b2;
	unsigned char	c2;

	i = 0;
	b2 = (unsigned char *)b;
	c2 = (unsigned char)c;
	while (i < len)
	{
		b2[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
