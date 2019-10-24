/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cntushel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:26:49 by cntushel          #+#    #+#             */
/*   Updated: 2019/07/19 13:58:13 by cntushel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		fresh[i] = f(i, str[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
