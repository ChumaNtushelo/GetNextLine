/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:26:43 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/19 10:41:44 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h2;
	char	*n2;

	i = 0;
	j = 0;
	h2 = (char *)haystack;
	n2 = (char *)needle;
	if (n2[j] == '\0')
		return (h2);
	while (h2[i] != '\0' && i < len)
	{
		j = 0;
		while (h2[i + j] == n2[j] && (i + j) < len)
		{
			j++;
			if (n2[j] == '\0')
				return ((char *)h2 + i);
		}
		i++;
	}
	return (NULL);
}
