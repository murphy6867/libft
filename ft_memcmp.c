/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngmasom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:54:47 by sngmasom          #+#    #+#             */
/*   Updated: 2022/04/04 00:54:47 by sngmasom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *string1;
	unsigned char *string2;
	size_t i;
	if (n == 0)
	{
		return (0);
	}
	string1 = (unsigned char *)str1; 
	string2 = (unsigned char *)str2;
	i = 0;
	while ((++i < n) && (*string1 == *string2))
	{
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}
