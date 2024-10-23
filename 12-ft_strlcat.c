/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:02:07 by eel-garo          #+#    #+#             */
/*   Updated: 2024/10/23 12:19:55 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t i;
	
	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen] && dstlen < dstsize){
		dstlen++;
	}
	while (src[srclen]){
		srclen++;
	}
	if (dstsize == 0 || dstlen == dstsize){
		return (dstsize + srclen);
	}
	while (src[i] && (dstlen + i + 1) < dstsize)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen + i < dstsize){
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
