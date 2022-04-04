/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngmasom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:12:20 by sngmasom          #+#    #+#             */
/*   Updated: 2022/04/04 10:12:20 by sngmasom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char *str;
	size_t i;

	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)x;
		i++;
	}
	
	return (ptr);
}
