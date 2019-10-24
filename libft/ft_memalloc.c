/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:52:12 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/10 16:27:08 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(size);
	i = 0;
	if (mem == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
