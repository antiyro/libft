/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:19:50 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/20 20:26:12 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_nbrlen(int n)
{
	int			i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n / 10 != 0 && n != 0)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char			*ft_reverse_str(char *str)
{
	int			i;
	int			j;
	char		temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char		*new;
	int			i;
	int			len_n;
	unsigned	nb;

	i = 0;
	len_n = ft_nbrlen(n);
	if (!(new = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1))))
		return (NULL);
	if (n < 0)
	{
		new[--len_n] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (len_n > 0)
	{
		new[i] = (nb % 10 + 48);
		nb /= 10;
		i++;
		len_n--;
	}
	new[++i] = '\0';
	return (ft_reverse_str(new));
}