/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:46:56 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/19 13:25:15 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*fresh;
	int		i;

	i = 0;
	str = (char *)s;
	if (str == NULL)
		return (NULL);
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (fresh == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		fresh[i] = f(str[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
