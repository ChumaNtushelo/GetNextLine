/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 07:10:02 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/22 15:20:48 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c2;
	char	*s2;

	i = 0;
	c2 = (char)c;
	s2 = (char *)s;
	if (c2 == '\0')
		return (s2 + ft_strlen(s2) + i);
	while (s2[i] != '\0')
	{
		if (s2[i] == c2)
		{
			return (s2 + i);
		}
		i++;
	}
	return (NULL);
}
