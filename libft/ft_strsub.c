/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:57:35 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/23 10:48:34 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;
	size_t	j;

	j = 0;
	i = start;
	if (s == 0)
		return (NULL);
	fresh = (char*)malloc(sizeof(char) * (len) + 1);
	if (!fresh)
		return (NULL);
	len = len + start;
	while (i < len)
	{
		fresh[j] = s[i];
		j++;
		i++;
	}
	fresh[j] = '\0';
	return (fresh);
}
