/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:33:48 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/20 20:21:06 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;

	if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (i == start)
		{
			j = 0;
			while (len)
			{
				new[j] = s[i + j];
				len--;
				j++;
			}
		}
		i++;
	}
	new[j] = '\0';
	return (new);
}
