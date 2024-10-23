/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:39:09 by eel-garo          #+#    #+#             */
/*   Updated: 2024/10/23 11:40:02 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(void * dest, const char *src, size_t dstsize)
{
	unsigned	char *d = (unsigned char *)dest;
	size_t len;
	size_t i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] && i < dstsize - 1)
		{
			d[i] = src[i];
			i++;
		}
		d[i] = '\0';
	}
	return (len);
}
