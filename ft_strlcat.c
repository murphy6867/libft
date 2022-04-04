/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngmasom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:19:49 by sngmasom          #+#    #+#             */
/*   Updated: 2022/04/04 10:19:49 by sngmasom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len_src;
	size_t	len_dest;
	
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_dest > n)
	{
		len_dest = n;
	}
	if (len_dest == n || n == 0)
	{
		return (len_dest + len_src);
	}
	if (len_src < n  - len_dest)
	{
		ft_memcpy(dest + len_dest, src, len_src + 1);
	}
	else
	{
		ft_memcpy(dest + len_dest, src, n - len_dest - 1);
		dest[n - 1] = '\0';
	}
	return (len_dest + len_src);
}
