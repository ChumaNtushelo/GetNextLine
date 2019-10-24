/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 08:49:47 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/22 09:03:09 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	fresh = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2)));
	if (fresh == 0)
		return (NULL);
	while (s1[i])
	{
		fresh[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		fresh[i] = s2[j];
		i++;
		j++;
	}
	fresh[i] = '\0';
	return (fresh);
}
