/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngmasom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:11:20 by sngmasom          #+#    #+#             */
/*   Updated: 2022/04/04 10:11:20 by sngmasom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	char	*str_dest;
	char    *str_src;

	str_dest = (char*)dest;
	str_src = (char*)src;
	if (str_dest > str_src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			str_dest[i] = str_src[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
