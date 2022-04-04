/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngmasom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:27:10 by sngmasom          #+#    #+#             */
/*   Updated: 2022/04/04 10:27:10 by sngmasom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int len;
	char *string;
	
	len = ft_strlen(str);
	string = (char *)str + len;
	while (string)
	{
		if (*string == c)
		{
			return ((char *)string); 
		}
		--string;
	} 
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (0);
}
