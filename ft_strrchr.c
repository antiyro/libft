/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:04:31 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/16 18:04:35 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char prime_lettre;
	int i;

	i = 0;
	if (*s == '\0' && !c)
		return ((char *)s);
	prime_lettre = s[0];
	while (*s)
	{
		s++;
		i++;
	}
	while (*s != (char)c && i != 0)
	{
		s--;
		i--;
	}
	if (i == 0 && s[0] != (char)c)
		return (0);
	else 
		return ((char *)s);
}

