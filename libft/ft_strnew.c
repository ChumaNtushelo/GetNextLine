/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:57:31 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/22 12:55:21 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	i;

	i = 0;
	if (!(fresh = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		fresh[i] = '\0';
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
