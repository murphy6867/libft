/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:35:29 by murphy            #+#    #+#             */
/*   Updated: 2022/04/04 15:01:59 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strnstr(const char *strsrc, const char *strtf, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (strtf[0] == '\0')
	{
		return ((char *)strsrc);
	}
	i = 0;
	while (strsrc[i] != '\0' && i < n)
	{
		j = 0;
		while (strsrc[i + j] == strtf[j] && (i + j) < n)
		{
			if (strtf[j + 1] == '\0')
			{
				return ((char *)strsrc + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}