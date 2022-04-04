/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngmasom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:21:59 by sngmasom          #+#    #+#             */
/*   Updated: 2022/04/04 10:21:59 by sngmasom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t len;
	
	if (n == 0)
	{
		return (ft_strlen(src));
	}
	len = 0;
	while (src[len] && len < (n - 1))
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = 0;
	return (ft_strlen(src));
}
