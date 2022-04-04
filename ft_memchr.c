/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:56:30 by sngmasom          #+#    #+#             */
/*   Updated: 2022/04/04 15:55:01 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int i;
	unsigned char *len_str;
	unsigned char chr;
	
	len_str = (unsigned char *)str;
	chr = (unsigned char)c;
	i = 0;
	while (i < (int)n)
	{
		if (len_str[i] == chr)
		{
			return (len_str + i);
		}
		i++;
	}
	return (NULL);
}
