/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 07:52:55 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/22 09:11:28 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c2;
	char	*s2;

	i = 0;
	c2 = (char)c;
	s2 = (char *)s;
	if (c2 == '\0')
	{
		return (s2 + ft_strlen(s2) + i);
	}
	i = ft_strlen(s2);
	while (s2[i--] != c2 && i >= 0)
	{
		if (s2[i] == c2)
		{
			return (s2 + i);
		}
	}
	return (NULL);
}
