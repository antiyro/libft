/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:38:59 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/18 11:56:30 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*my_dest;
	const char	*my_src;

	my_dest = dest;
	my_src = src;
	while (n)
	{
		*my_dest = *my_src;
		my_dest++;
		my_src++;
		n--;
	}
	return (my_dest);
}
