/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:50:07 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/23 12:15:04 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h2;
	char	*n2;
	size_t	i;
	size_t	j;

	h2 = (char *)haystack;
	n2 = (char *)needle;
	i = 0;
	if (n2[i] == '\0')
		return (h2);
	while (h2[i] != '\0')
	{
		j = 0;
		while (n2[j] == h2[i + j])
		{
			j++;
			if (n2[j] == '\0')
				return (h2 + i);
		}
		i++;
	}
	return (NULL);
}
