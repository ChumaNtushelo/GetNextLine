/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 07:21:33 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/16 08:04:33 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && i < (n - 1)
			&& str1[i] == str2[i])
		i++;
	if (str1[i] - str2[i] < 0)
		return (-1);
	else if (str1[i] - str2[i] > 0)
		return (1);
	else
		return (0);
}
