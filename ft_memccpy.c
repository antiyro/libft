/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:47:43 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/18 12:13:30 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*my_dest;
	const char	*my_src;

	my_dest = dest;
	my_src = src;
	while (n && *my_src != (char)c)
	{
		*my_dest = *my_src;
		my_dest++;
		my_src++;
		n--;
	}
	*my_dest = (char)c;
	return (my_dest);
}
